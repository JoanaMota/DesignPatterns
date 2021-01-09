#ifndef DOUGH_HPP
#define DOUGH_HPP
#include <iostream>
class CDough
{
public:
    CDough() {}
    ~CDough() {}
};
//
class CThickCrustDough : public CDough
{
public:
    CThickCrustDough();
    ~CThickCrustDough() {}
};
CThickCrustDough::CThickCrustDough()
{
    std::cout << "Using Thick Crust Dough" << std::endl;
}
//
class CThinCrustDough : public CDough
{
public:
    CThinCrustDough();
    ~CThinCrustDough() {}
};
CThinCrustDough::CThinCrustDough()
{
    std::cout << "Using Thin Crust Dough" << std::endl;
}
//
class CVeryThinCrustDough : public CDough
{
public:
    CVeryThinCrustDough();
    ~CVeryThinCrustDough() {}
};
CVeryThinCrustDough::CVeryThinCrustDough()
{
    std::cout << "Using Thin Crust Dough" << std::endl;
}

#endif /* DOUGH_HPP */