#include <iostream>
#include "tea.hpp"
#include "coffee.hpp"

int main()
{
    CTea *tea = new CTea();
    CCoffee *coffee = new CCoffee();

    std::cout << "Making Tea" << std::endl;
    tea->prepareRecipe();
    std::cout << "Making Coffee" << std::endl;
    coffee->prepareRecipe();
    return 0;
}