#ifndef DARK_ROAST_HPP
#define DARK_ROAST_HPP

#include "BeverageComponent.hpp"

class CDarkRoast : public CBeverage
{
public:
    CDarkRoast();
    ~CDarkRoast() {}
    double cost(void) override;
};

CDarkRoast::CDarkRoast()
{
    m_description = "Dark Roast";
}

double CDarkRoast::cost(void)
{
    return 0.99;
}

#endif /* DARK_ROAST_HPP */