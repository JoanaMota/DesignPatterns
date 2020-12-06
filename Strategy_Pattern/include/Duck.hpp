#ifndef DUCK_HPP
#define DUCK_HPP

#include "interfaces/FlyBehaviours/FlyBehaviour.hpp"
#include "interfaces/QuackBehaviours/QuackBehaviour.hpp"
#include "utils/colors.hpp"

class Duck
{
protected:
    FlyBehaviour *m_flyBehaviour;
    QuackBehaviour *m_quackBehaviour;

public:
    Duck()
    {
        print("A Duck as been constructed");
    }
    ~Duck() {}
    void swim(void);
    virtual void display(void) = 0;
    void performFly(void);
    void performQuack(void);
    void setFlyBehaviour(FlyBehaviour *f_flyBehaviour);
    void setQuackBehaviour(QuackBehaviour *f_quackBehaviour);

private:
    void print(std::string f_text);
};

void Duck::print(std::string f_text)
{
    std::cout << KYEL << f_text << RST << std::endl;
}

void Duck::swim(void)
{
    print("All ducks swim");
}
void Duck::performFly(void)
{
    print("Performing fly");
    m_flyBehaviour->fly();
}
void Duck::performQuack(void)
{
    print("Performing quack");
    m_quackBehaviour->quack();
}
void Duck::setFlyBehaviour(FlyBehaviour *f_flyBehaviour)
{
    print("Updating fly Behaviour");
    m_flyBehaviour = f_flyBehaviour;
}
void Duck::setQuackBehaviour(QuackBehaviour *f_quackBehaviour)
{
    print("Updating quack Behaviour");
    m_quackBehaviour = f_quackBehaviour;
}

#endif /* DUCK_HPP */