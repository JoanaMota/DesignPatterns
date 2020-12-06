#ifndef CURRENT_CONDITIONS_HPP
#define CURRENT_CONDITIONS_HPP

#include "interfaceDisplayElement.hpp"
#include "interfaceObserver.hpp"
#include "subject/weatherData.hpp"
#include <iostream>
#include "utils/colors.hpp"

class CCurrentConditionsDisplay : public IObserver, public IDisplayElement
{
private:
    float m_temperature;
    float m_humidity;
    CWeatherData &m_weatherSubj;
    void print(std::string f_text);

public:
    CCurrentConditionsDisplay(CWeatherData &f_weatherSubj);
    ~CCurrentConditionsDisplay();
    void update(SWeatherData &f_weatherData) override;
    void display(void) override;
    void removeMeFromList(void);
};

void CCurrentConditionsDisplay::print(std::string f_text)
{
    std::cout << KYEL << f_text << RST << std::endl;
}
//
CCurrentConditionsDisplay::CCurrentConditionsDisplay(CWeatherData &f_weatherSubj) : m_weatherSubj(f_weatherSubj)
{
    f_weatherSubj.registerObserver(this);
    this->print("Hello! I am the Current Conditions Observer");
}
CCurrentConditionsDisplay::~CCurrentConditionsDisplay()
{
    this->removeMeFromList();
}
void CCurrentConditionsDisplay::update(SWeatherData &f_weatherData)
{
    m_temperature = f_weatherData.temperature;
    m_humidity = f_weatherData.humidity;
    this->display();
}
void CCurrentConditionsDisplay::display(void)
{
    print("Current conditions are: " + std::to_string(m_temperature) +
          " degrees and " + std::to_string(m_humidity) + "% of humidity.");
}
void CCurrentConditionsDisplay::removeMeFromList(void)
{
    m_weatherSubj.removeObserver(this);
    this->print("I am the Current Conditions Observer and I remove myself from the observers list. Goodbye!");
}

#endif /* CURRENT_CONDITIONS_HPP */