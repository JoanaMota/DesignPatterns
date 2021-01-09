#ifndef CLAMS_HPP
#define CLAMS_HPP
#include <iostream>
class CClams
{
public:
    CClams() {}
    ~CClams() {}
};
//
class CFrozenClams : public CClams
{
public:
    CFrozenClams();
    ~CFrozenClams() {}
};
CFrozenClams::CFrozenClams()
{
    std::cout << "Adding Frozen Clams" << std::endl;
}
//
class CFreshClams : public CClams
{
public:
    CFreshClams();
    ~CFreshClams() {}
};
CFreshClams::CFreshClams()
{
    std::cout << "Adding Fresh Clams" << std::endl;
}
//
class CCalamari : public CClams
{
public:
    CCalamari();
    ~CCalamari() {}
};
CCalamari::CCalamari()
{
    std::cout << "Adding Calamari" << std::endl;
}

#endif /* CLAMS_HPP */