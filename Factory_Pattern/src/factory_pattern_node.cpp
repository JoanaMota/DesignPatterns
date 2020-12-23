#include <iostream>
#include "concrete_creators/chicago_pizza_store.hpp"
#include "concrete_creators/ny_pizza_store.hpp"
#include "concrete_creators/california_pizza_store.hpp"
#include "client.hpp"

int main()
{
    std::cout << "APP: We need a Pizza store in Chicago, New York and California" << std::endl;
    CPizzaStore *pizzaStoreChicago = new CChicagoPizzaStore();
    CPizzaStore *pizzaStoreNY = new CNYPizzaStore();
    CPizzaStore *pizzaStoreCalifornia = new CCaliforniaPizzaStore();

    // CClient *joana = new CClient(pizzaStoreChicago);

    std::cout << "Joana ordering" << std::endl;
    CPizza *pizzaClient1 = pizzaStoreChicago->orderPizza("cheese");
    if (pizzaClient1 != NULL)
    {
        std::cout << "Joana ordered a " << pizzaClient1->getName() << std::endl;
    }

    std::cout << "Miguel ordering" << std::endl;
    CPizza *pizzaClient2 = pizzaStoreNY->orderPizza("cheese");
    if (pizzaClient2 != NULL)
    {
        std::cout << "Miguel ordered a " << pizzaClient2->getName() << std::endl;
    }

    std::cout << "Joao ordering" << std::endl;
    CPizza *pizzaClient3 = pizzaStoreCalifornia->orderPizza("cheese");
    if (pizzaClient3 != NULL)
    {
        std::cout << "Joao ordered a " << pizzaClient3->getName() << std::endl;
    }

    delete pizzaStoreChicago;
    delete pizzaStoreCalifornia;
    delete pizzaStoreNY;
    return 0;
}