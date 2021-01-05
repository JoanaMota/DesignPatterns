#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "creator/pizza_store.hpp"
#include "concrete_products/ny_pizzas.hpp"

class CNYPizzaStore : public CPizzaStore
{
public:
    CNYPizzaStore()
    {
        print("Constructing a New York Pizza store");
        m_pizzas.push_back("Cheese");
        m_pizzas.push_back("Veggie");
        m_pizzas.push_back("Pepperoni");
    }
    ~CNYPizzaStore()
    {
        print("Destructing a New York Pizza store");
    }
    CPizza *createPizza(int f_type) const override;
};

CPizza *CNYPizzaStore::createPizza(int f_type) const
{
    if ("Cheese" == m_pizzas[f_type])
    {
        return new CNYCheesePizza();
    }
    else if ("Veggie" == m_pizzas[f_type])
    {
        return new CNYVeggiePizza();
    }
    else if ("Pepperoni" == m_pizzas[f_type])
    {
        return new CNYPepperoniPizza();
    }
    else
    {
        printError("Not a Pizza option");
        return NULL;
    }
}

#endif /* NY_PIZZA_STORE_HPP */