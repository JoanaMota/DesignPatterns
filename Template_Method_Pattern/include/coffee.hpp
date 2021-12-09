#ifndef COFFEE_HPP
#define COFFEE_HPP
#include "caffeine_beverage.hpp"

class CCoffee : public CCaffeineBeverage
{
public:
    CCoffee() {}
    ~CCoffee() {}
    void brew() const override
    {
        std::cout << "Coffee: Brewing the coffee grinds" << std::endl;
    }
    void addCondiments() const override
    {
        std::cout << "Coffee: Adding sugar and milk" << std::endl;
    }
    bool customerWantsCondiments() const // Hook
    {
        std::cout << "Would you like milk and sugar with your coffee? (y/n)" << std::endl;
        std::string input{""};
        std::cin >> input;
        if ("y" == input || "Y" == input)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

#endif /* COFFEE_HPP */