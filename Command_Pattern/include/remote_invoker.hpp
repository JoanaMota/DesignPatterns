#ifndef REMOTE_INVOKER_HPP
#define REMOTE_INVOKER_HPP

#include "command_interface.hpp"
#include <vector>
#include <assert.h>

// Invoker (or Sender)
class CSimpleRemoteControl
{
private:
    std::vector<ICommand *> m_onCommands;
    std::vector<ICommand *> m_offCommands;
    ICommand *m_undoCommand;
    int m_slots;
    int m_maxSlots{7};
    bool m_initialized{false};

public:
    CSimpleRemoteControl(const int slots)
    {
        std::cout << "Constructing Remote Control with: " << slots << " slots" << std::endl;
        if (slots > m_maxSlots)
        {
            std::cout << "Max number of slots can only be " << m_maxSlots << std::endl;
            return;
        }
        m_onCommands.resize(slots);
        m_offCommands.resize(slots);
        m_slots = slots;
        ICommand *noCommand = new CNoCommand();
        assert(m_onCommands.size() == m_offCommands.size());
        for (int i = 0; i < m_slots; i++)
        {
            m_onCommands[i] = noCommand;
            m_offCommands[i] = noCommand;
        }
        m_undoCommand = noCommand;
        m_initialized = true;
    }
    ~CSimpleRemoteControl() {}
    void setCommand(const int slot, ICommand *onCommand, ICommand *offCommand)
    {
        if (!m_initialized)
        {
            std::cout << "Remote not correctly initialized" << std::endl;
            return;
        }
        if (slot > m_slots - 1)
        {
            std::cout << "Slot greater than constructed remote" << std::endl;
            if (slot > m_maxSlots - 1)
            {
                std::cout << "Max number of slots reached. Not adding new command!" << std::endl;
                return;
            }
            else
            {
                m_slots = slot + 1;
                m_onCommands.resize(m_slots);
                m_offCommands.resize(m_slots);
                std::cout << "Extending remote number of slots to " << m_slots << std::endl;
            }
        }

        m_onCommands[slot] = onCommand;
        m_offCommands[slot] = offCommand;
    }
    void onButtonWasPressed(const int slot)
    {
        if (!m_initialized)
        {
            std::cout << "Remote not correctly initialized" << std::endl;
            return;
        }
        if (slot > m_slots - 1)
        {
            std::cout << "Invalid slot" << std::endl;
            return;
        }

        m_onCommands[slot]->execute();
        m_undoCommand = m_onCommands[slot];
    }
    void offButtonWasPressed(const int slot)
    {
        if (!m_initialized)
        {
            std::cout << "Remote not correctly initialized" << std::endl;
            return;
        }
        if (slot > m_slots - 1)
        {
            std::cout << "Invalid slot" << std::endl;
            return;
        }

        m_offCommands[slot]->execute();
        m_undoCommand = m_offCommands[slot];
    }
    void undoButtonWasPressed(void)
    {
        m_undoCommand->undo();
    }
    void print(void)
    {
        for (int i = 0; i < m_onCommands.size(); i++)
        {
            std::cout << "[slot " << i << "] ";
            m_onCommands[i]->print();
            std::cout << "  ";
            m_offCommands[i]->print();
            std::cout << std::endl;
        }
    }
};

#endif /* REMOTE_INVOKER_HPP */
