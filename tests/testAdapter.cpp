#include "testRunner.h"
#include "../src/Adapter.h"

class AdapterTest : public TestRunner
{
protected:
    void SetUp() override
    {

    }
    Adaptee adaptee;
};

TEST_F(AdapterTest, InverseArgs)
{
    Adapter adapter(adaptee);
    adapter.request("jhalak", 1644);
}