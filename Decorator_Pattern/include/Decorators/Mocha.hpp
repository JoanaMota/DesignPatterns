#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"
#include "utils/colors.hpp"

class CMocha : public CCondimentDecorator
{
private:
    CBeverage *m_beverage;
    void print(std::string f_text);

public:
    CMocha(CBeverage *f_beverage);
    ~CMocha();
    std::string getDescription(void) override;
    double cost(void) override;
};

CMocha::CMocha(CBeverage *f_beverage)
{
    print("Constructing Mocha");
    m_beverage = f_beverage;
}
std::string CMocha::getDescription(void)
{
    return m_beverage->getDescription() + ", Mocha";
}
double CMocha::cost(void)
{
    return m_beverage->cost() + 0.20;
}

void CMocha::print(std::string f_text)
{
    std::cout << KYEL << f_text << RST << std::endl;
}
#endif /* MOCHA_HPP */