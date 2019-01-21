#include "testRunner.h"
#include "../src/Singleton.h"

class SingletonTest : public TestRunner
{
};

//! Googletest with fixtures i.e. common
//! implementation or setup
TEST_F(SingletonTest, getInstanceOne)
{
    Singleton* inst = Singleton::getInstance();
    inst->useCount();
}

TEST_F(SingletonTest, getInstanceMultiple)
{
    Singleton* inst1 = Singleton::getInstance();
    inst1->useCount();
    Singleton* inst2 = Singleton::getInstance();
    inst2->useCount();
    Singleton* inst3 = Singleton::getInstance();
    inst3->useCount();
}