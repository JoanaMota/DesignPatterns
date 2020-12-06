#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include "QuackBehaviour.hpp"

class Squeak : public QuackBehaviour
{
public:
    Squeak(/* args */) {}
    ~Squeak() {}
    void quack(void) override;
};

void Squeak::quack(void)
{
    std::cout << "Duck Squeaks" << std::endl;
}
#endif /* SQUEAK_HPP */