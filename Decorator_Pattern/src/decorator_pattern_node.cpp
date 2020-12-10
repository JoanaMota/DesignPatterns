#include <iostream>
#include "Components/Espresso.hpp"
#include "Components/HouseBlend.hpp"
#include "Decorators/Mocha.hpp"
#include "Decorators/Milk.hpp"
#include "Decorators/Soy.hpp"
#include "Decorators/Whip.hpp"

int main()
{
    CBeverage *espresso = new CEspresso();
    std::cout << KORA
              << "The " << espresso->getDescription() << " costs: " << espresso->cost() << RST << std::endl;
    CBeverage *mochaEspresso = new CMocha(espresso);
    std::cout << KORA << "The " << mochaEspresso->getDescription() << " costs: " << mochaEspresso->cost() << RST << std::endl;
    mochaEspresso = new CMocha(mochaEspresso);
    std::cout << KORA << "The " << mochaEspresso->getDescription() << " costs: " << mochaEspresso->cost() << RST << std::endl;
    mochaEspresso = new CMilk(mochaEspresso);
    std::cout << KORA << "The " << mochaEspresso->getDescription() << " costs: " << mochaEspresso->cost() << RST << std::endl;

    CBeverage *houseBlend = new CHouseBlend();
    std::cout << KORA
              << "The " << houseBlend->getDescription() << " costs: " << houseBlend->cost() << RST << std::endl;
    houseBlend = new CSoy(houseBlend);
    std::cout << KORA << "The " << houseBlend->getDescription() << " costs: " << houseBlend->cost() << RST << std::endl;
    houseBlend = new CMilk(houseBlend);
    std::cout << KORA << "The " << houseBlend->getDescription() << " costs: " << houseBlend->cost() << RST << std::endl;
    houseBlend = new CMilk(houseBlend);
    std::cout << KORA << "The " << houseBlend->getDescription() << " costs: " << houseBlend->cost() << RST << std::endl;
    houseBlend = new CMocha(houseBlend);
    std::cout << KORA << "The " << houseBlend->getDescription() << " costs: " << houseBlend->cost() << RST << std::endl;

    delete espresso;
    delete mochaEspresso;
    delete houseBlend;

    return 0;
}