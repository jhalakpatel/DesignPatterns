#include "testRunner.h"
#include "../src/FactoryMethod.h"

class FactoryMethodTest : public TestRunner
{
protected:
    void SetUp() override
    {
    }
    ConcreteFactory1 cf1;
    ConcreteFactory2 cf2;
};

TEST_F(FactoryMethodTest, createProduct1)
{
    cf1.createProduct();
}

TEST_F(FactoryMethodTest, createProduct2)
{
    cf2.createProduct();
}