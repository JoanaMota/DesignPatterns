#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include "interfaceDisplayElement.hpp"
#include "interfaceObserver.hpp"
#include "subject/weatherData.hpp"
#include <iostream>
#include "utils/colors.hpp"
#include <vector>

class CStatisticsDisplay : public IObserver, public IDisplayElement
{
private:
    float m_avgTemp;
    std::vector<float> m_temperatures;

    CWeatherData &m_weatherSubj;
    void print(std::string f_text);
    void computeAvg(void);

public:
    CStatisticsDisplay(CWeatherData &f_weatherSubj);
    ~CStatisticsDisplay();
    void update(SWeatherData &f_weatherData) override;
    void display(void) override;
    void removeMeFromList(void);
};

void CStatisticsDisplay::print(std::string f_text)
{
    std::cout << KCYN << f_text << RST << std::endl;
}
//
CStatisticsDisplay::CStatisticsDisplay(CWeatherData &f_weatherSubj) : m_weatherSubj(f_weatherSubj), m_avgTemp(0)
{
    f_weatherSubj.registerObserver(this);
    this->print("Hello! I am the Statistics Observer");
}
CStatisticsDisplay::~CStatisticsDisplay()
{
    this->removeMeFromList();
}
void CStatisticsDisplay::update(SWeatherData &f_weatherData)
{
    m_temperatures.push_back(f_weatherData.temperature);
    this->computeAvg();
    this->display();
}
void CStatisticsDisplay::computeAvg(void)
{
    float sum;
    for (auto it = m_temperatures.begin(); it != m_temperatures.end(); ++it)
        sum += *it;

    m_avgTemp = sum / m_temperatures.size();
}
void CStatisticsDisplay::display(void)
{
    print("The Average Temperature is: " + std::to_string(m_avgTemp));
}
void CStatisticsDisplay::removeMeFromList(void)
{
    m_weatherSubj.removeObserver(this);
    this->print("I am the Statistics Observer and I remove myself from the observers list. Goodbye!");
}

#endif /* STATISTICS_HPP */