#ifndef CLAM_PIZZA_HPP
#define CLAM_PIZZA_HPP

#include "product/pizza.hpp"

class CCaliforniaCheesePizza : public CPizza
{
public:
    CCaliforniaCheesePizza();
    ~CCaliforniaCheesePizza() {}
};

CCaliforniaCheesePizza::CCaliforniaCheesePizza()
{
    m_name = "California Cheese Pizza";
    m_dough = "Thick Crust";
    m_sauce = "Tomato";
    m_toppings.push_back("Emmental Cheese");
}

#endif /* CLAM_PIZZA_HPP */