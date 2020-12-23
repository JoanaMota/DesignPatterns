#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "product/pizza.hpp"
#include "utils/colors.hpp"

class CPizzaStore
{
public:
    CPizzaStore() {}
    ~CPizzaStore() {}
    CPizza *orderPizza(std::string f_type);

protected:
    // Method that acts as a factory
    // abstract Product factoryMethod(String type)
    virtual CPizza *createPizza(std::string f_type) const = 0;
    void print(std::string f_text) const
    {
        std::cout << KBLU2 << f_text << RST << std::endl;
    }
};

CPizza *CPizzaStore::orderPizza(std::string f_type)
{
    std::cout << KBLU << "Pizza Store: Creating Pizza" << RST << std::endl;
    CPizza *pizza;
    // Call the method which is implemented on the derided classes
    pizza = this->createPizza(f_type);

    if (pizza != NULL)
    {
        // Call the overriden methods of the concrete products
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }
    else
    {
        printError("Pizza is NULL Pointer");
    }

    return pizza;
}

#endif /* PIZZA_STORE_HPP */