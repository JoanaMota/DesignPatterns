#ifndef STEREO_COMMANDS_HPP
#define STEREO_COMMANDS_HPP
#include <iostream>
#include "command_interface.hpp"

// Receiver
class CStereo
{
public:
    CStereo() {}
    ~CStereo() {}
    void on()
    {
        std::cout << "Stereo On" << std::endl;
    }
    void off()
    {
        std::cout << "Stereo Off" << std::endl;
    }
    void setCd()
    {
        std::cout << "Stereo Set CD" << std::endl;
    }
    void setDvd()
    {
        std::cout << "Stereo Set DVD" << std::endl;
    }
    void setRadio()
    {
        std::cout << "Stereo Set Radio" << std::endl;
    }
    void setVolume(int volume = 11)
    {
        std::cout << "Stereo Set Volume to " << volume << std::endl;
    }
};

// Command
class CStereoOnCommand : public ICommand
{
private:
    CStereo *stereo;

public:
    CStereoOnCommand(CStereo *stereo)
    {
        this->stereo = stereo;
    }
    ~CStereoOnCommand() {}
    void execute(void) override
    {
        this->stereo->on();
        this->stereo->setCd();
        this->stereo->setVolume();
    }
    void undo(void) override
    {
        this->stereo->off();
    }
    void print(void) override
    {
        std::cout << "StereoOnCommand";
    }
};
// Command
class CStereoOffCommand : public ICommand
{
private:
    CStereo *stereo;

public:
    CStereoOffCommand(CStereo *stereo)
    {
        this->stereo = stereo;
    }
    ~CStereoOffCommand() {}
    void execute(void) override
    {
        this->stereo->off();
    }
    void undo(void) override
    {
        this->stereo->on();
        this->stereo->setCd();
        this->stereo->setVolume();
    }
    void print(void) override
    {
        std::cout << "StereoOffCommand";
    }
};

#endif /* STEREO_COMMANDS_HPP */