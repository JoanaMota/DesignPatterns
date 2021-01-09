#ifndef PEPPERONI_PIZZA_HPP
#define PEPPERONI_PIZZA_HPP

#include "pizzas/product/pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_creator.hpp"

class CPepperoniPizza : public CPizza
{
public:
    CPepperoniPizza(CIngredientsFactoryCreator *f_ingredientsFactory)
    {
        m_ingredientsFactory = f_ingredientsFactory;
    }
    ~CPepperoniPizza() {}
    void prepare(void) override
    {
        std::cout << "A " << getName() << " is being prepared." << std::endl;
        m_dough = m_ingredientsFactory->createDough();
        m_sauce = m_ingredientsFactory->createSauce();
        m_cheese = m_ingredientsFactory->createCheese();
        m_pepperoni = m_ingredientsFactory->createPepperoni();
    }

private:
    CIngredientsFactoryCreator *m_ingredientsFactory;
};

#endif /* PEPPERONI_PIZZA_HPP */