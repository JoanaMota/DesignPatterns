#ifndef CALIFORNIA_PIZZA_STORE_HPP
#define CALIFORNIA_PIZZA_STORE_HPP

#include "creator/pizza_store.hpp"
#include "concrete_products/cheese_pizza.hpp"

class CCaliforniaPizzaStore : public CPizzaStore
{
public:
    CCaliforniaPizzaStore()
    {
        print("Constructing a California Pizza store");
    }
    ~CCaliforniaPizzaStore()
    {
        print("Destructing a California Pizza store");
    }
    CPizza *createPizza(std::string f_type) const override;
};

CPizza *CCaliforniaPizzaStore::createPizza(std::string f_type) const
{
    if ("cheese" == f_type)
    {
        return new CCaliforniaCheesePizza();
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

#endif /* CALIFORNIA_PIZZA_STORE_HPP */