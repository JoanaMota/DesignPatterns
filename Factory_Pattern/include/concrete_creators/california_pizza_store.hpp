#ifndef CALIFORNIA_PIZZA_STORE_HPP
#define CALIFORNIA_PIZZA_STORE_HPP
#include <vector>
#include "creator/pizza_store.hpp"
#include "concrete_products/california_pizzas.hpp"

class CCaliforniaPizzaStore : public CPizzaStore
{
public:
    CCaliforniaPizzaStore()
    {
        print("Constructing a California Pizza store");
        m_pizzas.push_back("Cheese");
        m_pizzas.push_back("Clam");
        m_pizzas.push_back("Pepperoni");
    }
    ~CCaliforniaPizzaStore()
    {
        print("Destructing a California Pizza store");
    }
    CPizza *createPizza(int f_type) const override;
};

CPizza *CCaliforniaPizzaStore::createPizza(int f_type) const
{
    if ("Cheese" == m_pizzas[f_type])
    {
        return new CCaliforniaCheesePizza();
    }
    else if ("Clam" == m_pizzas[f_type])
    {
        return new CCaliforniaClamPizza();
    }
    else if ("Pepperoni" == m_pizzas[f_type])
    {
        return new CCaliforniaPepperoniPizza();
    }
    else
    {
        printError("Not a Pizza option");
        return NULL;
    }
}

#endif /* CALIFORNIA_PIZZA_STORE_HPP */