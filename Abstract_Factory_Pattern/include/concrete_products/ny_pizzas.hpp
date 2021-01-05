#ifndef NY_PIZZAS_HPP
#define NY_PIZZAS_HPP

#include "product/pizza.hpp"
class CNYPizza : public CPizza
{
public:
    CNYPizza();
    ~CNYPizza() {}
    void cut(void) override;
};

CNYPizza::CNYPizza()
{
    m_dough = "Extra Thick Crust";
    m_sauce = "Marinara";
}
void CNYPizza::cut(void)
{
    print("Cutting Pizza into square slices");
}
// Types of New York Pizzas:
class CNYCheesePizza : public CNYPizza
{
public:
    CNYCheesePizza();
    ~CNYCheesePizza() {}
};
CNYCheesePizza::CNYCheesePizza()
{
    m_name = "New York Cheese Pizza";
    m_toppings.push_back("Shredded Mozzarella Cheese");
}
//
class CNYVeggiePizza : public CNYPizza
{
public:
    CNYVeggiePizza();
    ~CNYVeggiePizza() {}
};
CNYVeggiePizza::CNYVeggiePizza()
{
    m_name = "New York Veggie Pizza";
    m_toppings.push_back("Mushrooms");
    m_toppings.push_back("Peppers");
}
//
class CNYPepperoniPizza : public CNYPizza
{
public:
    CNYPepperoniPizza();
    ~CNYPepperoniPizza() {}
};
CNYPepperoniPizza::CNYPepperoniPizza()
{
    m_name = "New York Pepperoni Pizza";
    m_toppings.push_back("Pepperoni");
}

#endif /* NY_PIZZAS_HPP */