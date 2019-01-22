#include "common.h"
#include "Observer.h"

//! Create console
void WeatherStation::add(IObserver* observer)
{
    spdlog::info("Registering obsever: {}", observer->getName());
    mObservers.insert(observer);
}

void WeatherStation::remove(IObserver* observer)
{
    spdlog::info("UnRegistering obsever: {}", observer->getName());
    mObservers.erase(observer);
}

void WeatherStation::notify()
{
    for (const auto& obs : mObservers)
    {
        spdlog::info("Notifying observer: {}", obs->getName());
        obs->update();
    }
}

float WeatherStation::getTemprature()
{
    return mTemp;
}

void WindowDisplay::display()
{
    spdlog::info("WindowDisplay");
}

void WindowDisplay::update()
{
    spdlog::info("WindowDisplay Temperature: {}", mWeatherStation->getTemprature());
}

void PhoneDisplay::display()
{
    spdlog::info("PhoneDisplay");
}

void PhoneDisplay::update()
{
    spdlog::info("PhoneDisplay Temperature: {}", mWeatherStation->getTemprature());
}