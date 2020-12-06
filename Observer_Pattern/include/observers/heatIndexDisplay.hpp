#ifndef HEAT_INDEX_HPP
#define HEAT_INDEX_HPP

#include "interfaceDisplayElement.hpp"
#include "interfaceObserver.hpp"
#include "subject/weatherData.hpp"
#include <iostream>
#include "utils/colors.hpp"
#include <vector>

class CHeatIndexDisplay : public IObserver, public IDisplayElement
{
private:
    float m_heatIndex;
    float m_temperature;
    float m_relativeHumidity;

    CWeatherData &m_weatherSubj;
    void print(std::string f_text);
    void computeHeatIndex(void);

public:
    CHeatIndexDisplay(CWeatherData &f_weatherSubj);
    ~CHeatIndexDisplay();
    void update(SWeatherData &f_weatherData) override;
    void display(void) override;
    void removeMeFromList(void);
};

void CHeatIndexDisplay::print(std::string f_text)
{
    std::cout << KBLU << f_text << RST << std::endl;
}
//
CHeatIndexDisplay::CHeatIndexDisplay(CWeatherData &f_weatherSubj) : m_weatherSubj(f_weatherSubj), m_heatIndex(0)
{
    f_weatherSubj.registerObserver(this);
    this->print("Hello! I am the Heat Index Observer");
}
CHeatIndexDisplay::~CHeatIndexDisplay()
{
    this->removeMeFromList();
}
void CHeatIndexDisplay::update(SWeatherData &f_weatherData)
{
    m_temperature = f_weatherData.temperature;
    m_relativeHumidity = f_weatherData.relativeHumidity;
    this->computeHeatIndex();
    this->display();
}
void CHeatIndexDisplay::computeHeatIndex(void)
{
    m_heatIndex = m_temperature * m_relativeHumidity;
}
void CHeatIndexDisplay::display(void)
{
    print("The Heat Index is: " + std::to_string(m_heatIndex));
}
void CHeatIndexDisplay::removeMeFromList(void)
{
    m_weatherSubj.removeObserver(this);
    this->print("I am the Heat Index Observer and I remove myself from the observers list. Goodbye!");
}

#endif /* HEAT_INDEX_HPP */