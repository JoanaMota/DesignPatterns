#ifndef PEPPERONI_HPP
#define PEPPERONI_HPP
#include <iostream>
class CPepperoni
{
public:
    CPepperoni() {}
    ~CPepperoni() {}
};
//
class CThinSlicedPepperoni : public CPepperoni
{
public:
    CThinSlicedPepperoni();
    ~CThinSlicedPepperoni() {}
};
CThinSlicedPepperoni::CThinSlicedPepperoni()
{
    std::cout << "Adding Thin Sliced Pepperoni" << std::endl;
}
//
class CThickSlicedPepperoni : public CPepperoni
{
public:
    CThickSlicedPepperoni();
    ~CThickSlicedPepperoni() {}
};
CThickSlicedPepperoni::CThickSlicedPepperoni()
{
    std::cout << "Adding Thick Sliced Pepperoni" << std::endl;
}

#endif /* PEPPERONI_HPP */