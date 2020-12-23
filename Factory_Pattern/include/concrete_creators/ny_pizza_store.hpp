#ifndef NY_PIZZA_STORE_HPP
#define NY_PIZZA_STORE_HPP

#include "creator/pizza_store.hpp"
#include "concrete_products/cheese_pizza.hpp"

class CNYPizzaStore : public CPizzaStore
{
public:
    CNYPizzaStore()
    {
        print("Constructing a New York Pizza store");
    }
    ~CNYPizzaStore()
    {
        print("Destructing a New York Pizza store");
    }
    CPizza *createPizza(std::string f_type) const override;
};

CPizza *CNYPizzaStore::createPizza(std::string f_type) const
{
    if ("cheese" == f_type)
    {
        return new CNYCheesePizza();
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

#endif /* NY_PIZZA_STORE_HPP */