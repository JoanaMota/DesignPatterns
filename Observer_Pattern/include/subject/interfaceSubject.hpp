#ifndef INTERFACE_SUBJECT_HPP
#define INTERFACE_SUBJECT_HPP

#include "observers/interfaceObserver.hpp"

class ISubject
{
public:
    ISubject() {}
    ~ISubject() {}
    virtual void registerObserver(IObserver *f_observer) = 0;
    virtual void removeObserver(IObserver *f_observer) = 0;
    virtual void notifyObserver(IObserver *f_observer) = 0;
};

#endif /* INTERFACE_SUBJECT_HPP */