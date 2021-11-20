#ifndef TV_PLAYER_HPP
#define TV_PLAYER_HPP

#include <iostream>

class CTV
{
public:
    CTV() {}
    ~CTV() {}
    void on()
    {
        std::cout << "Turning on TV" << std::endl;
    }
    void off()
    {
        std::cout << "Turning off TV" << std::endl;
    }
};

#endif /* TV_PLAYER_HPP */