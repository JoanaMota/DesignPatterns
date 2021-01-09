#ifndef INGREDIENTS_FACTORY_CREATOR_HPP
#define INGREDIENTS_FACTORY_CREATOR_HPP

#include "ingredients/dough.hpp"
#include "ingredients/cheese.hpp"
#include "ingredients/clams.hpp"
#include "ingredients/pepperoni.hpp"
#include "ingredients/sauce.hpp"
#include "ingredients/veggies.hpp"

class CIngredientsFactoryCreator
{
public:
    virtual CDough *createDough(void) const = 0;
    virtual CSauce *createSauce(void) const = 0;
    virtual CCheese *createCheese(void) const = 0;
    virtual CClams *createClams(void) const = 0;
    virtual CPepperoni *createPepperoni(void) const = 0;
    virtual CVeggies *createVeggies(void) const = 0;
};

#endif /* INGREDIENTS_FACTORY_CREATOR_HPP */