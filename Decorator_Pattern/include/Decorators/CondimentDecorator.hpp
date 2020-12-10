#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include "Components/BeverageComponent.hpp"

class CCondimentDecorator : public CBeverage
{
public:
    CCondimentDecorator(){};
    ~CCondimentDecorator(){};
    virtual std::string getDescription(void) = 0;
};

#endif /* CONDIMENTDECORATOR_HPP */