#ifndef CHEESE_PIZZA_HPP
#define CHEESE_PIZZA_HPP

#include "pizzas/product/pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_creator.hpp"

class CChessePizza : public CPizza
{
public:
    CChessePizza(CIngredientsFactoryCreator *f_ingredientsFactory)
    {
        m_ingredientsFactory = f_ingredientsFactory;
    }
    ~CChessePizza() {}
    void prepare(void) override
    {
        std::cout << "A " << getName() << " is being prepared." << std::endl;
        m_dough = m_ingredientsFactory->createDough();
        m_sauce = m_ingredientsFactory->createSauce();
        m_cheese = m_ingredientsFactory->createCheese();
    }

private:
    CIngredientsFactoryCreator *m_ingredientsFactory;
};

#endif /* CHEESE_PIZZA_HPP */