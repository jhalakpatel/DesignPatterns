#include "Adapter.h"

auto adapter_console = spdlog::stdout_color_mt("adapter_console");

void Adaptee::request(int value, std::string name)
{
    adapter_console->info("First argument: {}, Second argument: {}", value, name);
}

Adapter::Adapter(Adaptee adaptee) : mAdaptee(adaptee) { }

void Adapter::request(std::string name, int value)
{
    adapter_console->info("First argument: {}, Second argument: {}", name, value);
    mAdaptee.request(value, name);
}