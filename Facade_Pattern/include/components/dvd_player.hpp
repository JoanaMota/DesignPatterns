#ifndef DVD_PLAYER_HPP
#define DVD_PLAYER_HPP

#include <iostream>

class CDvdPlayer
{
public:
    CDvdPlayer() {}
    ~CDvdPlayer() {}
    void on()
    {
        std::cout << "Turning on DVD Player" << std::endl;
    }
    void play()
    {
        std::cout << "Playing DVD" << std::endl;
    }
    void stop()
    {
        std::cout << "Stoping DVD" << std::endl;
    }
    void eject()
    {
        std::cout << "Ejecting DVD on DVD Player" << std::endl;
    }
    void off()
    {
        std::cout << "Turning off DVD Player" << std::endl;
    }
};

#endif /* DVD_PLAYER_HPP */