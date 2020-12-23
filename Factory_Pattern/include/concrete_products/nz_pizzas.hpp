#ifndef NY_PIZZAS_HPP
#define NY_PIZZAS_HPP

#include "product/pizza.hpp"
class CNYCheesePizza : public CPizza
{
public:
    CNYCheesePizza();
    ~CNYCheesePizza() {}
    void cut(void) override;
};

CNYCheesePizza::CNYCheesePizza()
{
    m_name = "New York Cheese Pizza";
    m_dough = "Extra Thick Crust";
    m_sauce = "Marinara";
    m_toppings.push_back("Shredded Mozzarella Cheese");
}
void CNYCheesePizza::cut(void)
{
    std::cout << KORA << "Cutting Pizza into square slices" << RST << std::endl;
}

#endif /* NY_PIZZAS_HPP */