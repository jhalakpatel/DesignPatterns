#include "testRunner.h"
#include "../src/Proxy.h"

class ProxyTest : public TestRunner 
{
protected:
    void SetUp() override { }
};

TEST_F(ProxyTest, InstantiateBookParser)
{
    BookParser bp("Ulysses");
}

TEST_F(ProxyTest, InstantiateProxyBookParser)
{
    LazyBookParserProxy lbp("Ulysses");
}

TEST_F(ProxyTest, GetNumPages)
{
    BookParser bp("Ulysses");
    ASSERT_EQ(bp.getNumPages(), 1000);
    ASSERT_EQ(bp.getNumPages(), 1000);
    ASSERT_EQ(bp.getNumPages(), 1000);
}

TEST_F(ProxyTest, GetNumPagesProxy)
{
    LazyBookParserProxy lbp("Ulysses");
    ASSERT_EQ(lbp.getNumPages(), 1000);
    ASSERT_EQ(lbp.getNumPages(), 1000);
    ASSERT_EQ(lbp.getNumPages(), 1000);
}