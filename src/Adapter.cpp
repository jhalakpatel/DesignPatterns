#include "Adapter.h"

void Adaptee::request(int value, std::string name)
{
    spdlog::info("First argument: {}, Second argument: {}", value, name);
}

Adapter::Adapter(Adaptee adaptee) : mAdaptee(adaptee) { }

void Adapter::request(std::string name, int value)
{
    spdlog::info("First argument: {}, Second argument: {}", name, value);
    mAdaptee.request(value, name);
}