#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <string>

// Component Class
class CBeverage
{
protected:
    std::string m_description;

public:
    CBeverage();
    ~CBeverage();
    virtual std::string getDescription(void);
    virtual double cost(void) = 0;
};

CBeverage::CBeverage() : m_description("Unknown Beverage")
{
    std::cout << "Beverage Constructed" << std::endl;
}

CBeverage::~CBeverage()
{
}
std::string CBeverage::getDescription(void)
{
    return m_description;
}

#endif /* BEVERAGE_HPP */