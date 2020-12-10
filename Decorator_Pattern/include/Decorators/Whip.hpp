#ifndef WHIP_HPP
#define WHIP_HPP

#include "CondimentDecorator.hpp"
#include "utils/colors.hpp"

class CWhip : public CCondimentDecorator
{
private:
    CBeverage *m_beverage;
    void print(std::string f_text);

public:
    CWhip(CBeverage *f_beverage);
    ~CWhip();
    std::string getDescription(void) override;
    double cost(void) override;
};

CWhip::CWhip(CBeverage *f_beverage)
{
    print("Constructing Whip");
    m_beverage = f_beverage;
}
std::string CWhip::getDescription(void)
{
    return m_beverage->getDescription() + ", Whip";
}
double CWhip::cost(void)
{
    return m_beverage->cost() + 0.10;
}

void CWhip::print(std::string f_text)
{
    std::cout << KCYN << f_text << RST << std::endl;
}
#endif /* WHIP_HPP */