#ifndef LIGHT_COMMANDS_HPP
#define LIGHT_COMMANDS_HPP

#include "command_interface.hpp"

// Receiver
class CLight
{
private:
    bool state;

public:
    CLight() : state(false) {}
    ~CLight() {}
    void on()
    {
        std::cout << "Light On" << std::endl;
        this->state = true;
    }
    void off()
    {
        std::cout << "Light Off" << std::endl;
        this->state = false;
    }
};

// Command
class CLightOnCommand : public ICommand
{
private:
    CLight *light;

public:
    CLightOnCommand(CLight *light)
    {
        this->light = light;
    }
    ~CLightOnCommand() {}
    void execute(void) override
    {
        this->light->on();
    }
    void undo(void) override
    {
        this->light->off();
    }
    void print(void) override
    {
        std::cout << "LightOnCommand";
    }
};
// Command
class CLightOffCommand : public ICommand
{
private:
    CLight *light;

public:
    CLightOffCommand(CLight *light)
    {
        this->light = light;
    }
    ~CLightOffCommand() {}
    void execute(void) override
    {
        this->light->off();
    }
    void undo(void) override
    {
        this->light->on();
    }
    void print(void) override
    {
        std::cout << "LightOffCommand";
    }
};

#endif /* LIGHT_COMMANDS_HPP */