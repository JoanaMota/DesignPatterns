#ifndef INTERFACE_OBSERVER_HPP
#define INTERFACE_OBSERVER_HPP

#include "types/weatherDataType.hpp"

class IObserver
{
public:
    IObserver() {}
    ~IObserver() {}
    virtual void update(SWeatherData &f_weatherData) = 0;
};
#endif /* INTERFACE_OBSERVER_HPP */