#ifndef PIZZA_STORE_HPP
#define PIZZA_STORE_HPP

#include "product/pizza.hpp"
#include "utils/colors.hpp"

class CPizzaStore
{
public:
    CPizzaStore() {}
    ~CPizzaStore() {}
    CPizza *orderPizza(int f_type);
    void printPizzas(void);

protected:
    // Method that acts as a factory
    // abstract Product factoryMethod(String type)
    virtual CPizza *createPizza(int f_type) const = 0;
    void print(std::string f_text) const
    {
        std::cout << KBLU2 << f_text << RST << std::endl;
    }

    std::vector<std::string> m_pizzas;
};

CPizza *CPizzaStore::orderPizza(int f_type)
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

void CPizzaStore::printPizzas(void)
{
    for (int it = 0; it < m_pizzas.size(); it++)
    {
        print(std::to_string(it) + " - " + m_pizzas[it]);
    }
}

#endif /* PIZZA_STORE_HPP */