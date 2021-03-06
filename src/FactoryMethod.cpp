#include "FactoryMethod.h"

AbstractProduct::AbstractProduct(int pid) : mPid(pid) { }
ConcreteProduct1::ConcreteProduct1(int pid) : AbstractProduct(pid) { }
ConcreteProduct2::ConcreteProduct2(int pid) : AbstractProduct(pid) { }

int AbstractProduct::getPid()
{
    spdlog::info("AbstractProduct::getPid(): {}", mPid);
    return mPid;
}

float ConcreteProduct1::getPrice()
{
    float mPrice = static_cast<float>(getPid()) * 5.0f;
    spdlog::info("ConcreteProduct1::getPrice(): {}", mPrice);
    return mPrice;
}

float ConcreteProduct2::getPrice()
{
    float mPrice = static_cast<float>(getPid()) * 10.0f;
    spdlog::info("ConcreteProduct2::getPrice(): {}", mPrice);
    return mPrice;
}

ConcreteFactory1::ConcreteFactory1()
{
}

ConcreteFactory2::ConcreteFactory2()
{
}

ConcreteProduct1 ConcreteFactory1::createProduct()
{
    ConcreteProduct1 product(1);
    return product;
}

ConcreteProduct2 ConcreteFactory2::createProduct()
{
    ConcreteProduct2 product(2);
    return product;
}