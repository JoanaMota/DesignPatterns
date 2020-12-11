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
    CSoy(CBeverage *f_beverage, CBeverage::ESize f_size);
    ~CSoy();
    std::string getDescription(void) override;
    double cost(void) override;
};

CSoy::CSoy(CBeverage *f_beverage, CBeverage::ESize f_size)
{
    print("Constructing Soy");
    m_beverage = f_beverage;
    m_beverage->setSize(f_size);
}
std::string CSoy::getDescription(void)
{
    return m_beverage->getDescription() + ", Soy";
}
double CSoy::cost(void)
{
    double cost = m_beverage->cost();
    switch (m_beverage->getSize())
    {
    case Tall:
        cost += 0.10;
        break;
    case Grande:
        cost += 0.15;
        break;
    case Venti:
        cost += 0.20;
        break;
    }
    return cost;
}

void CSoy::print(std::string f_text)
{
    std::cout << KBLU << f_text << RST << std::endl;
}
#endif /* SOY_HPP */