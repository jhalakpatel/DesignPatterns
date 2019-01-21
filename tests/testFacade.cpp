#include "testRunner.h"
#include "../src/Facade.h"

class FacadeTest : public TestRunner
{
protected:
    void SetUp() override {}
    Light light;
    Screen screen;
    DVD dvd;
    Amp amp;
};

TEST_F(FacadeTest, WatchMovie)
{
    HomeTheatreFacade htf(light, screen, dvd, amp);
    htf.watchMovie();
}

TEST_F(FacadeTest, EndMovie)
{
    HomeTheatreFacade htf(light, screen, dvd, amp);
    htf.endMovie();
}