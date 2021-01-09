#ifndef CHICAGO_PIZZA_STORE_HPP
#define CHICAGO_PIZZA_STORE_HPP

#include "stores/creator/pizza_store.hpp"
#include "pizzas/concrete_products/cheese_pizza.hpp"
#include "pizzas/concrete_products/veggies_pizza.hpp"
#include "pizzas/concrete_products/clam_pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_chicago.hpp"

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
    CIngredientsFactoryCreator *ingredientsFactory = new CIngredientsFactoryChicago();
    CPizza *pizza;
    if ("Cheese" == m_pizzas[f_type])
    {
        pizza = new CChessePizza(ingredientsFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    }
    else if ("Veggie" == m_pizzas[f_type])
    {
        pizza = new CVeggiesPizza(ingredientsFactory);
        pizza->setName("Chicago Style Veggie Pizza");
    }
    else if ("Clam" == m_pizzas[f_type])
    {
        pizza = new CClamPizza(ingredientsFactory);
        pizza->setName("Chicago Style Clam Pizza");
    }
    else
    {
        printError("Not a Pizza option");
        pizza = NULL;
    }
    return pizza;
}

#endif /* CHICAGO_PIZZA_STORE_HPP */