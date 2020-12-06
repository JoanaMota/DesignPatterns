#ifndef MODELDUCK_HPP
#define MODELDUCK_HPP

#include "Duck.hpp"
#include "interfaces/FlyBehaviours/FlyNoWay.hpp"
#include "interfaces/QuackBehaviours/Quack.hpp"
#include "utils/colors.hpp"

class ModelDuck : public Duck
{
public:
    ModelDuck();
    ~ModelDuck() {}
    void display(void);

private:
    void print(std::string f_text);
};

ModelDuck::ModelDuck()
{
    m_flyBehaviour = new FlyNoWay();
    m_quackBehaviour = new Quack();
}

void ModelDuck::display(void)
{
    print("I am a Model Duck");
}
void ModelDuck::print(std::string f_text)
{
    std::cout << KBLU << f_text << RST << std::endl;
}

#endif /* MODELDUCK_HPP */