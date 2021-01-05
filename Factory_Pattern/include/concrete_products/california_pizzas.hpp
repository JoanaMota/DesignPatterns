#ifndef CALIFORNIA_PIZZA_HPP
#define CALIFORNIA_PIZZA_HPP

#include "product/pizza.hpp"

class CCaliforniaPizza : public CPizza
{
public:
    CCaliforniaPizza();
    ~CCaliforniaPizza() {}
};

CCaliforniaPizza::CCaliforniaPizza()
{
    m_dough = "Thick Crust";
    m_sauce = "Tomato";
}
//Types of California Pizzas
class CCaliforniaCheesePizza : public CCaliforniaPizza
{
public:
    CCaliforniaCheesePizza();
    ~CCaliforniaCheesePizza() {}
};
CCaliforniaCheesePizza::CCaliforniaCheesePizza()
{
    m_name = "California Cheese Pizza";
    m_toppings.push_back("Emmental Cheese");
}
//
class CCaliforniaClamPizza : public CCaliforniaPizza
{
public:
    CCaliforniaClamPizza();
    ~CCaliforniaClamPizza() {}
};
CCaliforniaClamPizza::CCaliforniaClamPizza()
{
    m_name = "California Clam Pizza";
    m_toppings.push_back("Clams");
}
//
class CCaliforniaPepperoniPizza : public CCaliforniaPizza
{
public:
    CCaliforniaPepperoniPizza();
    ~CCaliforniaPepperoniPizza() {}
};
CCaliforniaPepperoniPizza::CCaliforniaPepperoniPizza()
{
    m_name = "California Pepperoni Pizza";
    m_toppings.push_back("Pepperoni");
}

#endif /* CALIFORNIA_PIZZA_HPP */