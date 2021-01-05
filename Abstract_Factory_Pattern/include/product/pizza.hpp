#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <iostream>
#include <vector>
#include "utils/colors.hpp"

class CPizza
{
protected:
    void print(std::string f_text) const;
    std::string m_name{""};
    std::string m_dough{""};
    std::string m_sauce{""};
    std::vector<std::string> m_toppings;

public:
    CPizza() {}
    ~CPizza() {}
    void prepare(void);
    void bake(void);
    virtual void cut(void);
    void box(void);
    std::string getName(void);
};

void CPizza::print(std::string f_text) const
{
    std::cout << KORA << f_text << RST << std::endl;
}

void CPizza::prepare(void)
{
    print("Preparing " + m_name);
    print("Tossing dough which will be " + m_dough);
    print("Adding " + m_sauce + " Sauce");
    print("Adding Toppings:");
    for (int it = 0; it < m_toppings.size(); it++)
    {
        print(" - " + m_toppings[it]);
    }
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

#endif /* PIZZA_HPP */