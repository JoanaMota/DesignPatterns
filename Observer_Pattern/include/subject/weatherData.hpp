#ifndef WEATHER_DATA_HPP
#define WEATHER_DATA_HPP

#include <list>
#include "interfaceSubject.hpp"
#include "utils/colors.hpp"

class CWeatherData : public ISubject
{
private:
    std::list<IObserver *> m_observers;
    SWeatherData m_weatherData;
    void notifyObserver(IObserver *f_observer) override;
    void notifyObservers(void);
    //
    void measurementsChanged(void);
    bool validateMeasurements(SWeatherData f_weatherData);
    void print(std::string f_text);

public:
    CWeatherData() { print("CWeatherData Constructed"); }
    ~CWeatherData() { print("CWeatherData Destroyed"); }
    void registerObserver(IObserver *f_observer) override;
    void removeObserver(IObserver *f_observer) override;
    void updateMeasurements(float temperature, float humidity, float pressure, float f_relativePressure);
    int getNumberObservers(void);
};

void CWeatherData::print(std::string f_text)
{
    std::cout << KMAG << f_text << RST << std::endl;
}
void CWeatherData::registerObserver(IObserver *f_observer)
{
    m_observers.push_back(f_observer);
}
void CWeatherData::removeObserver(IObserver *f_observer)
{
    m_observers.remove(f_observer);
}
void CWeatherData::notifyObserver(IObserver *f_observer)
{
    f_observer->update(m_weatherData);
}
void CWeatherData::notifyObservers()
{
    for (std::list<IObserver *>::iterator observer = m_observers.begin(); observer != m_observers.end(); ++observer)
        this->notifyObserver(*observer);
}
//
void CWeatherData::measurementsChanged(void)
{
    this->notifyObservers();
}
bool CWeatherData::validateMeasurements(SWeatherData f_weatherData)
{
    bool valid = true;
    if (f_weatherData == m_weatherData)
    {
        printWarning("Measurements are the same as previous. Observers will not be notified!");
        valid = false;
    }
    return valid;
}
//
void CWeatherData::updateMeasurements(float f_temperature, float f_humidity, float f_pressure, float f_relativePressure)
{
    SWeatherData tempWeatherData = m_weatherData;
    m_weatherData.temperature = f_temperature;
    m_weatherData.humidity = f_humidity;
    m_weatherData.pressure = f_pressure;
    m_weatherData.relativeHumidity = f_relativePressure;

    if (this->validateMeasurements(tempWeatherData))
    {
        this->measurementsChanged();
    }
}
int CWeatherData::getNumberObservers(void)
{
    return m_observers.size();
}

#endif /* WEATHER_DATA_HPP */