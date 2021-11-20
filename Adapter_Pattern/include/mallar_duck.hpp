#ifndef MALLAR_DUCK_HPP
#define MALLAR_DUCK_HPP
#include <iostream>
#include "duck_interface.hpp"

class CMallarDuck : public IDuck
{
public:
    CMallarDuck() {}
    ~CMallarDuck() {}
    void quack() const override
    {
        std::cout << "Quack" << std::endl;
    }
    void fly() const override
    {
        std::cout << "I am flying" << std::endl;
    }
};

#endif /* MALLAR_DUCK_HPP */