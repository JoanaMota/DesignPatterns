#ifndef SAUCE_HPP
#define SAUCE_HPP
#include <iostream>
class CSauce
{
public:
    CSauce() {}
    ~CSauce() {}
};
//
class CPlumTomatoSauce : public CSauce
{
public:
    CPlumTomatoSauce();
    ~CPlumTomatoSauce() {}
};
CPlumTomatoSauce::CPlumTomatoSauce()
{
    std::cout << "Using Plum Tomato Sauce" << std::endl;
}
//
class CMarinaraSauce : public CSauce
{
public:
    CMarinaraSauce();
    ~CMarinaraSauce() {}
};
CMarinaraSauce::CMarinaraSauce()
{
    std::cout << "Using Marinara Sauce" << std::endl;
}
//
class CBruschettaSauce : public CSauce
{
public:
    CBruschettaSauce();
    ~CBruschettaSauce() {}
};
CBruschettaSauce::CBruschettaSauce()
{
    std::cout << "Using Bruschetta Sauce" << std::endl;
}

#endif /* SAUCE_HPP */