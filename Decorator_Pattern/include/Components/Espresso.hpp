#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "BeverageComponent.hpp"

class CEspresso : public CBeverage
{
public:
    CEspresso();
    ~CEspresso() {}
    double cost(void) override;
};

CEspresso::CEspresso()
{
    m_description = "Espresso";
}

double CEspresso::cost(void)
{
    return 1.99;
}

#endif /* ESPRESSO_HPP */