#include "Singleton.h"
#include "Logger.h"

std::unique_ptr<Singleton> Singleton::gInstance = nullptr;
int Singleton::gInstCount = 0;

Singleton::Singleton(std::string name) : mName(name)
{
}

Singleton* Singleton::getInstance()
{
    if (gInstance == nullptr)
    {
        gInstance.reset(new Singleton("my singleton class"));
        spdlog::info("Creating Singleton class: {}", gInstance->getName());
    }
    gInstCount++;
    spdlog::info("Returning Instance of Singleton class: {}", gInstance->getName());
    return gInstance.get();
}

void Singleton::useCount()
{
    spdlog::info("Singleton class found: {}", gInstCount);
}

std::string Singleton::getName()
{
    return mName;
}