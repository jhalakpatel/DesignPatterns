#include "Decorator.h"

void AbstractProduct::description()
{
    spdlog::info("AbstractProduct");
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
    spdlog::info("ConcreteProductA");
}

int ConcreteProductB::cost()
{
    return 2;
}

void ConcreteProductB::description()
{
    spdlog::info("ConcreteProductB");
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
    spdlog::info("ConcreteDecoratorB");
}

int ConcreteDecoratorA::cost()
{
    return 10 + mAbstractProduct->cost();
}

void ConcreteDecoratorA::description()
{
    spdlog::info("ConcreteDecoratorA");
}