#include "Singleton.h"

auto singleton_console = spdlog::stdout_color_mt("singleton_console");

std::unique_ptr<Singleton> Singleton::gInstance = nullptr;
int Singleton::gInstCount = 0;

Singleton::Singleton(std::string name) : mName(name)
{}

Singleton* Singleton::getInstance()
{
    if (gInstance == nullptr)
    {
        gInstance.reset(new Singleton("my singleton class"));
        singleton_console->info("Creating Singleton class: {}", gInstance->getName());
    }
    gInstCount++;
    singleton_console->info("Returning Instance of Singleton class: {}", gInstance->getName());
    return gInstance.get();
}

void Singleton::useCount()
{
    singleton_console->info("Singleton class found: {}", gInstCount);
}

std::string Singleton::getName()
{
    return mName;
}