#ifndef CHICAGO_PIZZAS_HPP
#define CHICAGO_PIZZAS_HPP

#include "product/pizza.hpp"

class CChicagoPizza : public CPizza
{
public:
    CChicagoPizza();
    ~CChicagoPizza() {}
};

CChicagoPizza::CChicagoPizza()
{
    m_dough = "Extra Thick Crust";
    m_sauce = "Plum Tomato";
}
// Types of Chicago Pizzas
class CChicagoCheesePizza : public CChicagoPizza
{
public:
    CChicagoCheesePizza();
    ~CChicagoCheesePizza() {}
};
CChicagoCheesePizza::CChicagoCheesePizza()
{
    m_name = "Chicago Cheese Pizza";
    m_toppings.push_back("Grated Reggiano Cheese");
}
//
class CChicagoClamPizza : public CChicagoPizza
{
public:
    CChicagoClamPizza();
    ~CChicagoClamPizza() {}
};
CChicagoClamPizza::CChicagoClamPizza()
{
    m_name = "Chicago Clam Pizza";
    m_toppings.push_back("Clams");
}
//
class CChicagoVeggiePizza : public CChicagoPizza
{
public:
    CChicagoVeggiePizza();
    ~CChicagoVeggiePizza() {}
};
CChicagoVeggiePizza::CChicagoVeggiePizza()
{
    m_name = "Chicago Veggie Pizza";
    m_toppings.push_back("Mushrooms");
    m_toppings.push_back("Peppers");
}

#endif /* CHICAGO_PIZZAS_HPP */