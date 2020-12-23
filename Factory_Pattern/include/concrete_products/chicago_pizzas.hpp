#ifndef CHICAGO_PIZZAS_HPP
#define CHICAGO_PIZZAS_HPP

#include "product/pizza.hpp"

class CChicagoCheesePizza : public CPizza
{
public:
    CChicagoCheesePizza();
    ~CChicagoCheesePizza() {}
};

CChicagoCheesePizza::CChicagoCheesePizza()
{
    m_name = "Chicago Cheese Pizza";
    m_dough = "Extra Thick Crust";
    m_sauce = "Plum Tomato";
    m_toppings.push_back("Grated Reggiano Cheese");
}

#endif /* CHICAGO_PIZZAS_HPP */