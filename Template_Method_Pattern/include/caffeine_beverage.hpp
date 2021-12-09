#ifndef CAFFEINE_BEVERAGE_HPP
#define CAFFEINE_BEVERAGE_HPP
#include <iostream>

class CCaffeineBeverage
{
public:
    CCaffeineBeverage() {}
    ~CCaffeineBeverage() {}
    void prepareRecipe() const //This is the template method, the core of this Pattern
    {
        this->boilWater();
        this->brew();
        this->pourInCup();
        if (this->customerWantsCondiments())
        {
            this->addCondiments();
        }
    }

protected:
    // Concrete operations
    void boilWater() const
    {
        std::cout << "CaffeineBeverage: Boiling Water" << std::endl;
    }
    void pourInCup() const
    {
        std::cout << "CaffeineBeverage: Pouring in Cup" << std::endl;
    }
    // Operations that have to be implemented in subclasses.
    virtual void brew() const = 0;
    virtual void addCondiments() const = 0;

    // "Hooks." Subclasses may override them, but it's not mandatory since the hooks already have default(but empty) implementation.Hooks provide additional extension points in some crucial places of the algorithm.
    virtual bool customerWantsCondiments() const
    {
        return true;
    }
};

#endif /* CAFFEINE_BEVERAGE_HPP */