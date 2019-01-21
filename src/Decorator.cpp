#include "Decorator.h"

auto dec_console = spdlog::stdout_color_mt("decorator_console");

void AbstractProduct::description()
{
    dec_console->info("AbstractProduct");
}

ConcreteProductA::ConcreteProductA()
{
}

ConcreteProductB::ConcreteProductB()
{
}

int ConcreteProductA::cost()
{
    return 1;
}

void ConcreteProductA::description()
{
    dec_console->info("ConcreteProductA");
}

int ConcreteProductB::cost()
{
    return 2;
}

void ConcreteProductB::description()
{
    dec_console->info("ConcreteProductB");
}

ConcreteDecoratorA::ConcreteDecoratorA(AbstractProduct* abstractProduct)
    : mAbstractProduct(abstractProduct)
    {
    }

ConcreteDecoratorB::ConcreteDecoratorB(AbstractProduct* abstractProduct)
    : mAbstractProduct(abstractProduct)
    {
    }

int ConcreteDecoratorB::cost()
{
    return 5 + mAbstractProduct->cost();
}

void ConcreteDecoratorB::description()
{
    dec_console->info("ConcreteDecoratorB");
}

int ConcreteDecoratorA::cost()
{
    return 10 + mAbstractProduct->cost();
}

void ConcreteDecoratorA::description()
{
    dec_console->info("ConcreteDecoratorA");
}