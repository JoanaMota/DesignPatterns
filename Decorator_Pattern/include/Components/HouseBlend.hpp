#ifndef HOUSE_BLEND_HPP
#define HOUSE_BLEND_HPP

#include "BeverageComponent.hpp"

class CHouseBlend : public CBeverage
{
public:
    CHouseBlend();
    ~CHouseBlend() {}
    double cost(void) override;
};

CHouseBlend::CHouseBlend()
{
    m_description = "House Blend";
}

double CHouseBlend::cost(void)
{
    return 0.89;
}

#endif /* HOUSE_BLEND_HPP */