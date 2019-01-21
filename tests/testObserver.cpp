#include "testRunner.h"
#include "../src/Observer.h"

class ObserverTest : public TestRunner
{
protected:
    void SetUp() override
    {
        //! Create observable
        weatherSt.reset(new WeatherStation());
        //! Create observer with observable interface
        phoneDisp.reset(new PhoneDisplay(weatherSt.get()));
        windowDisp.reset(new WindowDisplay(weatherSt.get()));
    }
    std::unique_ptr<WeatherStation> weatherSt;
    std::unique_ptr<PhoneDisplay> phoneDisp;
    std::unique_ptr<WindowDisplay> windowDisp;
};

TEST_F(ObserverTest, add)
{
    //! Register
    weatherSt->add(windowDisp.get());
    weatherSt->add(phoneDisp.get());
}

TEST_F(ObserverTest, notify)
{
    //! Register
    weatherSt->add(windowDisp.get());
    weatherSt->add(phoneDisp.get());
    //! Notify
    weatherSt->notify();
}