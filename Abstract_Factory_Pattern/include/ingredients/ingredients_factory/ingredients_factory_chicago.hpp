#ifndef INGREDIENTS_FACTORY_CHICAGO_HPP
#define INGREDIENTS_FACTORY_CHICAGO_HPP

#include "ingredients_factory_creator.hpp"

class CIngredientsFactoryChicago : public CIngredientsFactoryCreator
{
public:
    CDough *createDough(void) const override
    {
        return new CThickCrustDough();
    }
    CSauce *createSauce(void) const override
    {
        return new CPlumTomatoSauce();
    }
    CCheese *createCheese(void) const override
    {
        return new CMozzarellaCheese();
    }
    CClams *createClams(void) const override
    {
        return new CFrozenClams();
    }
    CPepperoni *createPepperoni(void) const override
    {
        return new CThinSlicedPepperoni();
    }
    CVeggies *createVeggies(void) const override
    {
        CVeggies veggies[] = {CBlackOlives(), CSpinach(), CEggPlant()};
        return veggies;
    }
};

#endif /* INGREDIENTS_FACTORY_CHICAGO_HPP */