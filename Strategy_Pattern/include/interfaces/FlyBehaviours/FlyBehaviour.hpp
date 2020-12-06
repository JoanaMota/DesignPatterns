#ifndef FLYBEHAVIOUR_HPP
#define FLYBEHAVIOUR_HPP

#include <iostream>

class FlyBehaviour
{
public:
    FlyBehaviour(/* args */) {}
    ~FlyBehaviour() {}

    virtual void fly(void) = 0;
};
#endif /* FLYBEHAVIOUR_HPP */
