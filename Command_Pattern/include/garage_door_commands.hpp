#ifndef GARAGE_DOOR_COMMANDS_HPP
#define GARAGE_DOOR_COMMANDS_HPP
#include <iostream>
#include "command_interface.hpp"

// Receiver
class CGarageDoor
{
public:
    CGarageDoor() {}
    ~CGarageDoor() {}
    void up()
    {
        std::cout << "Garage opening" << std::endl;
    }
    void down()
    {
        std::cout << "Garage closing" << std::endl;
    }
    void stop()
    {
        std::cout << "Garage stoping" << std::endl;
    }
    void lightOn()
    {
        std::cout << "Garage light on" << std::endl;
    }
    void lightOff()
    {
        std::cout << "Garage light off" << std::endl;
    }
};

// Command
class CGarageDoorOpenCommand : public ICommand
{
private:
    CGarageDoor *garage;

public:
    CGarageDoorOpenCommand(CGarageDoor *garage)
    {
        this->garage = garage;
    }
    ~CGarageDoorOpenCommand() {}
    void execute(void) override
    {
        this->garage->up();
    }
    void undo(void) override
    {
        this->garage->down();
    }
    void print(void) override
    {
        std::cout << "GarageDoorOpenCommand";
    }
};
// Command
class CGarageDoorCloseCommand : public ICommand
{
private:
    CGarageDoor *garage;

public:
    CGarageDoorCloseCommand(CGarageDoor *garage)
    {
        this->garage = garage;
    }
    ~CGarageDoorCloseCommand() {}
    void execute(void) override
    {
        this->garage->down();
    }
    void undo(void) override
    {
        this->garage->up();
    }
    void print(void) override
    {
        std::cout << "GarageDoorCloseCommand";
    }
};

#endif /* GARAGE_DOOR_COMMANDS_HPP */