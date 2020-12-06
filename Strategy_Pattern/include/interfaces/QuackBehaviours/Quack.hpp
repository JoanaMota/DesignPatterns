#ifndef QUACK_HPP
#define QUACK_HPP

#include "QuackBehaviour.hpp"
class Quack : public QuackBehaviour
{
public:
    Quack(/* args */) {}
    ~Quack() {}
    void quack(void) override;
};

void Quack::quack(void)
{
    std::cout << "Duck Quacks" << std::endl;
}

#endif /* QUACK_HPP */