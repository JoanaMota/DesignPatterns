#ifndef AMPLIFIER_PLAYER_HPP
#define AMPLIFIER_PLAYER_HPP

#include <iostream>

class CAmplifier
{
public:
    CAmplifier() {}
    ~CAmplifier() {}
    void on()
    {
        std::cout << "Turning on Amplifier" << std::endl;
    }
    void setVolume(int volume)
    {
        std::cout << "Setting Volume to: " << volume << std::endl;
    }
    void setSurround()
    {
        std::cout << "Setting Surround Sound" << std::endl;
    }
    void off()
    {
        std::cout << "Turning off Amplifier" << std::endl;
    }
};

#endif /* AMPLIFIER_PLAYER_HPP */