#ifndef TEA_HPP
#define TEA_HPP
#include "caffeine_beverage.hpp"

class CTea : public CCaffeineBeverage
{
public:
    CTea() {}
    ~CTea() {}
    void brew() const override
    {
        std::cout << "Tea: Steeping the teabag in the water" << std::endl;
    }
    void addCondiments() const override
    {
        std::cout << "Tea: Adding lemon" << std::endl;
    }
};

#endif /* TEA_HPP */