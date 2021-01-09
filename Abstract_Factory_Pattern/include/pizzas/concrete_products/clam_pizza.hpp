#ifndef CLAM_PIZZA_HPP
#define CLAM_PIZZA_HPP

#include "pizzas/product/pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_creator.hpp"

class CClamPizza : public CPizza
{
public:
    CClamPizza(CIngredientsFactoryCreator *f_ingredientsFactory)
    {
        m_ingredientsFactory = f_ingredientsFactory;
    }
    ~CClamPizza() {}
    void prepare(void) override
    {
        std::cout << "A " << getName() << " is being prepared." << std::endl;
        m_dough = m_ingredientsFactory->createDough();
        m_sauce = m_ingredientsFactory->createSauce();
        m_cheese = m_ingredientsFactory->createCheese();
        m_clams = m_ingredientsFactory->createClams();
    }

private:
    CIngredientsFactoryCreator *m_ingredientsFactory;
};

#endif /* CLAM_PIZZA_HPP */