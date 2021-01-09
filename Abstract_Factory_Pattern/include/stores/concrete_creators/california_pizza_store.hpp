#ifndef CALIFORNIA_PIZZA_STORE_HPP
#define CALIFORNIA_PIZZA_STORE_HPP
#include <vector>
#include "stores/creator/pizza_store.hpp"
#include "pizzas/concrete_products/cheese_pizza.hpp"
#include "pizzas/concrete_products/pepperoni_pizza.hpp"
#include "pizzas/concrete_products/clam_pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_california.hpp"

class CCaliforniaPizzaStore : public CPizzaStore
{
public:
    CCaliforniaPizzaStore()
    {
        print("Constructing a California Pizza store");
        m_pizzas.push_back("Cheese");
        m_pizzas.push_back("Pepperoni");
        m_pizzas.push_back("Clam");
    }
    ~CCaliforniaPizzaStore()
    {
        print("Destructing a California Pizza store");
    }
    CPizza *createPizza(int f_type) const override;
};

CPizza *CCaliforniaPizzaStore::createPizza(int f_type) const
{
    CIngredientsFactoryCreator *ingredientsFactory = new CIngredientsFactoryCalifornia();
    CPizza *pizza;
    if ("Cheese" == m_pizzas[f_type])
    {
        pizza = new CChessePizza(ingredientsFactory);
        pizza->setName("California Style Cheese Pizza");
    }
    else if ("Pepperoni" == m_pizzas[f_type])
    {
        pizza = new CPepperoniPizza(ingredientsFactory);
        pizza->setName("California Style Pepperoni Pizza");
    }
    else if ("Clam" == m_pizzas[f_type])
    {
        pizza = new CClamPizza(ingredientsFactory);
        pizza->setName("California Style Clam Pizza");
    }
    else
    {
        printError("Not a Pizza option");
        pizza = NULL;
    }
    return pizza;
}

#endif /* CALIFORNIA_PIZZA_STORE_HPP */