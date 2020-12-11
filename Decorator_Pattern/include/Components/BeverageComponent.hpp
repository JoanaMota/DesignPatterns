#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <string>

// Component Class
class CBeverage
{
protected:
    std::string m_description;

public:
    enum ESize
    {
        Tall,
        Grande,
        Venti
    };
    //
    CBeverage();
    ~CBeverage();
    virtual std::string getDescription(void);
    virtual double cost(void) = 0;
    void setSize(ESize f_size);
    ESize getSize(void);

    ESize m_size = Tall;
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
void CBeverage::setSize(CBeverage::ESize f_size)
{
    m_size = f_size;
}
CBeverage::ESize CBeverage::getSize(void)
{
    return m_size;
}

#endif /* BEVERAGE_HPP */