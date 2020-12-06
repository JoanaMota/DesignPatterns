#ifndef MALLARDUCK_HPP
#define MALLARDUCK_HPP

#include "Duck.hpp"
#include "interfaces/FlyBehaviours/FlyWithWings.hpp"
#include "interfaces/QuackBehaviours/Squeak.hpp"
#include "utils/colors.hpp"
class MallarDuck : public Duck
{
public:
    MallarDuck();
    ~MallarDuck() {}
    void display(void);

private:
    void print(std::string f_text);
};

MallarDuck::MallarDuck()
{
    m_flyBehaviour = new FlyWithWings();
    m_quackBehaviour = new Squeak();
}
void MallarDuck::display(void)
{
    print("I am a MallarDuck");
}
void MallarDuck::print(std::string f_text)
{
    std::cout << KMAG << f_text << RST << std::endl;
}

#endif /* MALLARDUCK_HPP */