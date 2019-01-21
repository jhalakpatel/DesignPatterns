#include "common.h"
#include "Observer.h"

//! Create console
auto obs_console = spdlog::stdout_color_mt("obs_console");
void WeatherStation::add(IObserver* observer)
{
    obs_console->info("Registering obsever: {}", observer->getName());
    mObservers.insert(observer);
}

void WeatherStation::remove(IObserver* observer)
{
    obs_console->info("UnRegistering obsever: {}", observer->getName());
    mObservers.erase(observer);
}

void WeatherStation::notify()
{
    for (const auto& obs : mObservers)
    {
        obs_console->info("Notifying observer: {}", obs->getName());
        obs->update();
    }
}

float WeatherStation::getTemprature()
{
    return mTemp;
}

void WindowDisplay::display()
{
    obs_console->info("WindowDisplay");
}

void WindowDisplay::update()
{
    obs_console->info("WindowDisplay Temperature: {}", mWeatherStation->getTemprature());
}

void PhoneDisplay::display()
{
    obs_console->info("PhoneDisplay");
}

void PhoneDisplay::update()
{
    obs_console->info("PhoneDisplay Temperature: {}", mWeatherStation->getTemprature());
}