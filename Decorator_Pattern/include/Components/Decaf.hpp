#ifndef DECAF_HPP
#define DECAF_HPP

#include "BeverageComponent.hpp"

class CDecaf : public CBeverage
{
public:
    CDecaf();
    ~CDecaf() {}
    double cost(void) override;
};

CDecaf::CDecaf()
{
    m_description = "Decaf";
}

double CDecaf::cost(void)
{
    return 1.05;
}

#endif /* DECAF_HPP */