#ifndef VEGGIES_PIZZA_HPP
#define VEGGIES_PIZZA_HPP

#include "pizzas/product/pizza.hpp"
#include "ingredients/ingredients_factory/ingredients_factory_creator.hpp"

class CVeggiesPizza : public CPizza
{
public:
    CVeggiesPizza(CIngredientsFactoryCreator *f_ingredientsFactory)
    {
        m_ingredientsFactory = f_ingredientsFactory;
    }
    ~CVeggiesPizza() {}
    void prepare(void) override
    {
        std::cout << "A " << getName() << " is being prepared." << std::endl;
        m_dough = m_ingredientsFactory->createDough();
        m_sauce = m_ingredientsFactory->createSauce();
        m_cheese = m_ingredientsFactory->createCheese();
        m_veggies = m_ingredientsFactory->createVeggies();
    }

private:
    CIngredientsFactoryCreator *m_ingredientsFactory;
};

#endif /* VEGGIES_PIZZA_HPP */