#include "testRunner.h"
#include "../src/Decorator.h"

class DecoratorTest : public TestRunner
{
protected:
    void SetUp() override
    {
    }
    ConcreteProductA cpA;
    ConcreteProductB cpB;
};

TEST_F(DecoratorTest, ProductADecoratorAB)
{
    ConcreteDecoratorA prADecA(&cpA);
    ConcreteDecoratorB prADecAB(&prADecA);
    EXPECT_EQ(prADecAB.cost(), 16); 
}

TEST_F(DecoratorTest, ProductBDecoratorAB)
{
    ConcreteDecoratorA prBDecA(&cpB);
    ConcreteDecoratorB prBDecAB(&prBDecA);
    EXPECT_EQ(prBDecAB.cost(), 17);
}