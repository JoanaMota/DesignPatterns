#ifndef INGREDIENTS_FACTORY_NY_HPP
#define INGREDIENTS_FACTORY_NY_HPP

#include "ingredients_factory_creator.hpp"

class CIngredientsFactoryNY : public CIngredientsFactoryCreator
{
public:
    CDough *createDough(void) const override
    {
        return new CThinCrustDough();
    }
    CSauce *createSauce(void) const override
    {
        return new CMarinaraSauce();
    }
    CCheese *createCheese(void) const override
    {
        return new CReggianoCheese();
    }
    CClams *createClams(void) const override
    {
        return new CFreshClams();
    }
    CPepperoni *createPepperoni(void) const override
    {
        return new CThinSlicedPepperoni();
    }
    CVeggies *createVeggies(void) const override
    {
        CVeggies veggies[] = {CGarlic(), COnions(), CMushrooms(), CRedPepper()};
        return veggies;
    }
};

#endif /* INGREDIENTS_FACTORY_NY_HPP */