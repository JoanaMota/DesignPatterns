#ifndef CHICAGO_PIZZA_STORE_HPP
#define CHICAGO_PIZZA_STORE_HPP

#include "creator/pizza_store.hpp"
#include "concrete_products/cheese_pizza.hpp"

class CChicagoPizzaStore : public CPizzaStore
{
public:
    CChicagoPizzaStore()
    {
        print("Constructing a Chicago Pizza store");
    }
    ~CChicagoPizzaStore()
    {
        print("Destructing a Chicago Pizza store");
    }
    CPizza *createPizza(std::string f_type) const override;
};

CPizza *CChicagoPizzaStore::createPizza(std::string f_type) const
{
    if ("cheese" == f_type)
    {
        return new CChicagoCheesePizza();
    }
    // else if ("veggie")
    // {
    //     /* code */
    // }
    // else if ("clam")
    // {
    //     /* code */
    // }
    // else if ("pepperoni")
    // {
    //     /* code */
    // }
    else
    {
        print("Not a Pizza option");
        return NULL;
    }
}

#endif /* CHICAGO_PIZZA_STORE_HPP */