#ifndef MACRO_COMMAND_HPP
#define MACRO_COMMAND_HPP
#include <vector>
#include "command_interface.hpp"

class CMacroCommand : public ICommand
{
private:
    std::vector<ICommand *> m_commands;

public:
    CMacroCommand(std::vector<ICommand *> commands)
    {
        m_commands = commands;
    }
    ~CMacroCommand() {}
    void execute(void) override
    {
        std::cout << "Executing a Macro Command:" << std::endl;
        for (int i = 0; i < m_commands.size(); i++)
        {
            m_commands[i]->execute();
        }
        std::cout << "End of Macro Command" << std::endl;
    }
    void print(void) override
    {
        for (int i = 0; i < m_commands.size(); i++)
        {
            m_commands[i]->print();
        }
    }
    void undo(void) override
    {
        for (int i = m_commands.size() - 1; i >= 0; i--)
        {
            m_commands[i]->undo();
        }
    }
};

#endif /* MACRO_COMMAND_HPP */