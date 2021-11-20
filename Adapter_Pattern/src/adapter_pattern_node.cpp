#include <iostream>

#include "mallar_duck.hpp"
#include "wild_turkey.hpp"
#include "turkey_adapter.hpp"

int main()
{
    // Duck object
    CMallarDuck *mallarDuck = new CMallarDuck();

    // Turkey object
    CWildTurkey *wildTurkey = new CWildTurkey();
    IDuck *turkeyObjectAdapted = new object_adapter::CTurkeyAdapter(wildTurkey);
    IDuck *turkeyClassAdapted = new class_adapter::CTurkeyAdapter();

    std::cout << "The Turkey says..." << std::endl;
    wildTurkey->gobble();
    wildTurkey->fly();

    std::cout << "The Duck says..." << std::endl;
    mallarDuck->quack();
    mallarDuck->fly();

    std::cout << "The Turkey Adapted with a Object Adapter says..." << std::endl;
    turkeyObjectAdapted->quack();
    turkeyClassAdapted->quack();
    turkeyObjectAdapted->fly();
    turkeyClassAdapted->fly();
    std::cout << "The Turkey Adapted with a Class Adapter says..." << std::endl;
    turkeyClassAdapted->quack();
    turkeyClassAdapted->fly();

    delete turkeyClassAdapted;
    delete turkeyObjectAdapted;
    delete wildTurkey;
    delete mallarDuck;
    return 0;
}