#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "stores/creator/pizza_store.hpp"
#include "pizzas/concrete_products/cheese_pizza.hpp"
#include "pizzas/concrete_products/veggies_pizza.hpp"
#include "pizzas/concrete_products/pepperoni_pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_ny.hpp"

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
    CIngredientsFactoryCreator *ingredientsFactory = new CIngredientsFactoryNY();
    CPizza *pizza;
    if ("Cheese" == m_pizzas[f_type])
    {
        pizza = new CChessePizza(ingredientsFactory);
        pizza->setName("NY Style Cheese Pizza");
    }
    else if ("Veggie" == m_pizzas[f_type])
    {
        pizza = new CVeggiesPizza(ingredientsFactory);
        pizza->setName("NY Style Veggie Pizza");
    }
    else if ("Pepperoni" == m_pizzas[f_type])
    {
        pizza = new CPepperoniPizza(ingredientsFactory);
        pizza->setName("NY Style Pepperoni Pizza");
    }
    else
    {
        printError("Not a Pizza option");
        pizza = NULL;
    }
    return pizza;
}

#endif /* NY_PIZZA_STORE_HPP */