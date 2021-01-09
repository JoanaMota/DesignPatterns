#ifndef INGREDIENTS_FACTORY_CALIFORNIA_HPP
#define INGREDIENTS_FACTORY_CALIFORNIA_HPP

#include "ingredients_factory_creator.hpp"

class CIngredientsFactoryCalifornia : public CIngredientsFactoryCreator
{
public:
    CDough *createDough(void) const override
    {
        return new CVeryThinCrustDough();
    }
    CSauce *createSauce(void) const override
    {
        return new CBruschettaSauce();
    }
    CCheese *createCheese(void) const override
    {
        return new CGoatCheese();
    }
    CClams *createClams(void) const override
    {
        return new CCalamari();
    }
    CPepperoni *createPepperoni(void) const override
    {
        return new CThickSlicedPepperoni();
    }
    CVeggies *createVeggies(void) const override
    {
        CVeggies veggies[] = {COnions(), CMushrooms(), CRedPepper()};
        return veggies;
    }
};

#endif /* INGREDIENTS_FACTORY_CALIFORNIA_HPP */