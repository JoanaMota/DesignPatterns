#ifndef CHEESE_HPP
#define CHEESE_HPP
#include <iostream>
class CCheese
{
public:
    CCheese() {}
    ~CCheese() {}
};
//
class CMozzarellaCheese : public CCheese
{
public:
    CMozzarellaCheese();
    ~CMozzarellaCheese() {}
};
CMozzarellaCheese::CMozzarellaCheese()
{
    std::cout << "Using Mozzarella Cheese" << std::endl;
}
//
class CReggianoCheese : public CCheese
{
public:
    CReggianoCheese();
    ~CReggianoCheese() {}
};
CReggianoCheese::CReggianoCheese()
{
    std::cout << "Using Reggiano Cheese" << std::endl;
}
//
class CGoatCheese : public CCheese
{
public:
    CGoatCheese();
    ~CGoatCheese() {}
};
CGoatCheese::CGoatCheese()
{
    std::cout << "Using Goat Cheese" << std::endl;
}

#endif /* CHEESE_HPP */