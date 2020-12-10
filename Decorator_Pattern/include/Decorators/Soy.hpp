#ifndef SOY_HPP
#define SOY_HPP

#include "CondimentDecorator.hpp"
#include "utils/colors.hpp"

class CSoy : public CCondimentDecorator
{
private:
    CBeverage *m_beverage;
    void print(std::string f_text);

public:
    CSoy(CBeverage *f_beverage);
    ~CSoy();
    std::string getDescription(void) override;
    double cost(void) override;
};

CSoy::CSoy(CBeverage *f_beverage)
{
    print("Constructing Soy");
    m_beverage = f_beverage;
}
std::string CSoy::getDescription(void)
{
    return m_beverage->getDescription() + ", Soy";
}
double CSoy::cost(void)
{
    return m_beverage->cost() + 0.15;
}

void CSoy::print(std::string f_text)
{
    std::cout << KBLU << f_text << RST << std::endl;
}
#endif /* SOY_HPP */