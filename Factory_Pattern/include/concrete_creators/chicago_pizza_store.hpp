#ifndef CHICAGO_PIZZA_STORE_HPP
#define CHICAGO_PIZZA_STORE_HPP

#include "creator/pizza_store.hpp"
#include "concrete_products/chicago_pizzas.hpp"

class CChicagoPizzaStore : public CPizzaStore
{
public:
    CChicagoPizzaStore()
    {
        print("Constructing a California Pizza store");
        m_pizzas.push_back("Cheese");
        m_pizzas.push_back("Clam");
        m_pizzas.push_back("Veggie");
    }
    ~CChicagoPizzaStore()
    {
        print("Destructing a California Pizza store");
    }
    CPizza *createPizza(int f_type) const override;
};

CPizza *CChicagoPizzaStore::createPizza(int f_type) const
{
    if ("Cheese" == m_pizzas[f_type])
    {
        return new CChicagoCheesePizza();
    }
    else if ("Clam" == m_pizzas[f_type])
    {
        return new CChicagoClamPizza();
    }
    else if ("Veggie" == m_pizzas[f_type])
    {
        return new CChicagoVeggiePizza();
    }
    else
    {
        printError("Not a Pizza option");
        return NULL;
    }
}

#endif /* CHICAGO_PIZZA_STORE_HPP */