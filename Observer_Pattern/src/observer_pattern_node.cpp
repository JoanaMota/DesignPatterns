#include <iostream>
#include "subject/weatherData.hpp"
#include "observers/currentConditionsDisplay.hpp"
#include "observers/statisticsDisplay.hpp"
#include "observers/heatIndexDisplay.hpp"

int main()
{
    std::cout << KGRN << "Initializing Subject and Observers" << std::endl;
    // Subject
    CWeatherData *weatherData = new CWeatherData();
    // Observers:
    CCurrentConditionsDisplay *currentConditions = new CCurrentConditionsDisplay(*weatherData);
    CStatisticsDisplay *statistics = new CStatisticsDisplay(*weatherData);
    CHeatIndexDisplay *heatIndex = new CHeatIndexDisplay(*weatherData);
    std::cout << KGRN << "Number of Observers: " << weatherData->getNumberObservers() << RST << std::endl;

    std::cout << KGRN << "Waiting for update on Measurements" << std::endl;
    weatherData->updateMeasurements(1.0, 2.0, 3.0, 10.0);
    weatherData->updateMeasurements(4.0, 5.0, 6.0, 10.0);
    weatherData->updateMeasurements(10.0, 20.0, 30.0, 10.0);
    weatherData->updateMeasurements(40.0, 50.0, 60.0, 10.0);

    delete statistics;
    std::cout << KGRN << "Number of Observers: " << weatherData->getNumberObservers() << RST << std::endl;
    delete currentConditions;
    std::cout << KGRN << "Number of Observers: " << weatherData->getNumberObservers() << RST << std::endl;
    delete heatIndex;
    std::cout << KGRN << "Number of Observers: " << weatherData->getNumberObservers() << RST << std::endl;
    delete weatherData;

    return 0;
}