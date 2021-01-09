#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <vector>
#include "utils/colors.hpp"
#include "ingredients/dough.hpp"
#include "ingredients/cheese.hpp"
#include "ingredients/clams.hpp"
#include "ingredients/pepperoni.hpp"
#include "ingredients/sauce.hpp"
#include "ingredients/veggies.hpp"

class CPizza
{
public:
    CPizza() {}
    ~CPizza() {}
    virtual void prepare(void) = 0;
    void bake(void);
    virtual void cut(void);
    void box(void);
    std::string getName(void);
    void setName(std::string f_name);

private:
    void print(std::string f_text) const;
    std::string m_name{""};

protected:
    CDough *m_dough;
    CSauce *m_sauce;
    CCheese *m_cheese;
    CClams *m_clams;
    CPepperoni *m_pepperoni;
    CVeggies *m_veggies;
};

void CPizza::print(std::string f_text) const
{
    std::cout << KORA << f_text << RST << std::endl;
}

void CPizza::bake(void)
{
    print("Baking Pizza");
}
void CPizza::cut(void)
{
    print("Cutting Pizza into diagonal slices");
}
void CPizza::box(void)
{
    print("Boxing Pizza");
}
std::string CPizza::getName(void)
{
    return m_name;
}
void CPizza::setName(std::string f_name)
{
    m_name = f_name;
}

#endif /* PIZZA_HPP */