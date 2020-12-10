#ifndef MILK_HPP
#define MILK_HPP

#include "CondimentDecorator.hpp"
#include "utils/colors.hpp"

class CMilk : public CCondimentDecorator
{
private:
    CBeverage *m_beverage;
    void print(std::string f_text);

public:
    CMilk(CBeverage *f_beverage);
    ~CMilk();
    std::string getDescription(void) override;
    double cost(void) override;
};

CMilk::CMilk(CBeverage *f_beverage)
{
    print("Constructing Milk");
    m_beverage = f_beverage;
}
std::string CMilk::getDescription(void)
{
    return m_beverage->getDescription() + ", Steamed Milk";
}
double CMilk::cost(void)
{
    return m_beverage->cost() + 0.10;
}

void CMilk::print(std::string f_text)
{
    std::cout << KWHT << f_text << RST << std::endl;
}
#endif /* MILK_HPP */