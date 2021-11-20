#ifndef WILD_TURKEY_HPP
#define WILD_TURKEY_HPP
#include <iostream>

#include "turkey_interface.hpp"

class CWildTurkey : public ITurkey
{
public:
    CWildTurkey() {}
    ~CWildTurkey() {}
    virtual void gobble() const override
    {
        std::cout << "Gobble Gobble" << std::endl;
    }
    void fly() const override
    {
        std::cout << "I am flying a short distance" << std::endl;
    }
};

#endif /* WILD_TURKEY_HPP */