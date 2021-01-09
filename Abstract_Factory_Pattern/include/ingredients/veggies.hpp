#ifndef VEGGIES_HPP
#define VEGGIES_HPP
#include <iostream>
class CVeggies
{
public:
    CVeggies() {}
    ~CVeggies() {}
};
//
class CGarlic : public CVeggies
{
public:
    CGarlic();
    ~CGarlic() {}
};
CGarlic::CGarlic()
{
    std::cout << "Adding Garlic" << std::endl;
}
//
class COnions : public CVeggies
{
public:
    COnions();
    ~COnions() {}
};
COnions::COnions()
{
    std::cout << "Adding Onions" << std::endl;
}
//
class CMushrooms : public CVeggies
{
public:
    CMushrooms();
    ~CMushrooms() {}
};
CMushrooms::CMushrooms()
{
    std::cout << "Adding Mushrooms" << std::endl;
}
//
class CRedPepper : public CVeggies
{
public:
    CRedPepper();
    ~CRedPepper() {}
};
CRedPepper::CRedPepper()
{
    std::cout << "Adding RedPepper" << std::endl;
}
//
class CSpinach : public CVeggies
{
public:
    CSpinach();
    ~CSpinach() {}
};
CSpinach::CSpinach()
{
    std::cout << "Adding Spinach" << std::endl;
}
//
class CEggPlant : public CVeggies
{
public:
    CEggPlant();
    ~CEggPlant() {}
};
CEggPlant::CEggPlant()
{
    std::cout << "Adding EggPlant" << std::endl;
}
//
class CBlackOlives : public CVeggies
{
public:
    CBlackOlives();
    ~CBlackOlives() {}
};
CBlackOlives::CBlackOlives()
{
    std::cout << "Adding BlackOlives" << std::endl;
}

#endif /* VEGGIES_HPP */