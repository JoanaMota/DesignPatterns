#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

#include "QuackBehaviour.hpp"

class MuteQuack : public QuackBehaviour
{
public:
    MuteQuack(/* args */) {}
    ~MuteQuack() {}
    void quack(void) override;
};

void MuteQuack::quack(void)
{
    std::cout << "I dont quack" << std::endl;
}

#endif /* MUTEQUACK_HPP */