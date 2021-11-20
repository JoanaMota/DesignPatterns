#ifndef TURKEY_ADAPTER_HPP
#define TURKEY_ADAPTER_HPP

#include <iostream>
#include "duck_interface.hpp"
#include "turkey_interface.hpp"
#include "wild_turkey.hpp"

namespace object_adapter
{
    class CTurkeyAdapter : public IDuck
    {
    private:
        ITurkey *m_turkey; // Adaptee

    public:
        CTurkeyAdapter(ITurkey *turkey) : m_turkey(turkey) {}
        ~CTurkeyAdapter() {}
        void quack() const override
        {
            m_turkey->gobble();
        }
        void fly() const override
        {
            for (int i = 0; i < 5; i++)
            {
                m_turkey->fly();
            }
        }
    };
}
namespace class_adapter
{
    class CTurkeyAdapter : public IDuck, public CWildTurkey
    {
    public:
        CTurkeyAdapter() {}
        ~CTurkeyAdapter() {}
        void quack() const override
        {
            gobble();
        }
        void fly() const override
        {
            for (int i = 0; i < 5; i++)
            {
                CWildTurkey::fly(); //We need to add the base class name otherwise their would be an ambiguity with the fly() method from IDuck
            }
        }
    };
}

#endif /* TURKEY_ADAPTER_HPP */