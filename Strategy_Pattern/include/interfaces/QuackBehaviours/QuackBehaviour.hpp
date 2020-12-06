#ifndef QUACKBEHAVIOUR_HPP
#define QUACKBEHAVIOUR_HPP

#include <iostream>

class QuackBehaviour
{
private:
    /* data */
public:
    QuackBehaviour(/* args */) {}
    ~QuackBehaviour() {}
    virtual void quack(void) = 0;
};
#endif /* QUACKBEHAVIOUR_HPP */
