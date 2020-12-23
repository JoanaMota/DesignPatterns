#include <iostream>
#include <assert.h>
#include "concrete_creators/chicago_pizza_store.hpp"
#include "concrete_creators/ny_pizza_store.hpp"
#include "concrete_creators/california_pizza_store.hpp"

int main()
{
    std::cout << "APP: We need a Pizza store in Chicago, New York and California" << std::endl;
    CPizzaStore *pizzaStoreChicago = new CChicagoPizzaStore();
    CPizzaStore *pizzaStoreNY = new CNYPizzaStore();
    CPizzaStore *pizzaStoreCalifornia = new CCaliforniaPizzaStore();

    std::cout << "APP: Select Store:" << std::endl;
    std::cout << " 0 - Chicago" << std::endl;
    std::cout << " 1 - New York" << std::endl;
    std::cout << " 2 - California" << std::endl;
    int storeNumber;
    std::cin >> storeNumber;

    CPizza *pizza = NULL;

    std::cout << "APP: Select Pizza type:" << std::endl;
    switch (storeNumber)
    {
    case 0:
        pizzaStoreChicago->printPizzas();
        int chicagoPizzaNumber;
        std::cin >> chicagoPizzaNumber;
        pizza = pizzaStoreChicago->orderPizza(chicagoPizzaNumber);
        if (pizza != NULL)
        {
            std::cout << "You ordered a " << pizza->getName() << std::endl;
        }
        break;
    case 1:
        pizzaStoreNY->printPizzas();
        int nyPizzaNumber;
        std::cin >> nyPizzaNumber;
        pizza = pizzaStoreNY->orderPizza(nyPizzaNumber);
        if (pizza != NULL)
        {
            std::cout << "You ordered a " << pizza->getName() << std::endl;
        }
        break;
    case 2:
        pizzaStoreCalifornia->printPizzas();
        int californiaPizzaNumber;
        std::cin >> californiaPizzaNumber;
        pizza = pizzaStoreCalifornia->orderPizza(californiaPizzaNumber);
        if (pizza != NULL)
        {
            std::cout << "You ordered a " << pizza->getName() << std::endl;
        }
        break;

    default:
        printError("Store Not defined");
        break;
    }

    delete pizza;
    delete pizzaStoreChicago;
    delete pizzaStoreCalifornia;
    delete pizzaStoreNY;
    return 0;
}