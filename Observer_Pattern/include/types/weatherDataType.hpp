#ifndef TYPES_WEATHER_DATA_HPP
#define TYPES_WEATHER_DATA_HPP

struct SWeatherData
{
    float temperature;
    float humidity;
    float relativeHumidity;
    float pressure;

    bool operator==(SWeatherData const &obj)
    {
        bool equal = true;
        if (temperature != obj.temperature ||
            humidity != obj.humidity ||
            relativeHumidity != obj.relativeHumidity ||
            pressure != obj.pressure)
        {
            equal = false;
        }
        return equal;
    }
};
#endif /* TYPES_WEATHER_DATA_HPP */