#include "testRunner.h"
#include "../src/Strategy.h"

class StrategyTest : public TestRunner
{
protected:
    void SetUp() override
    {
        //! compose rubber duck
        //! Display instances
        gd.reset(new StringDisplay());
        sd.reset(new GraphicDisplay());
    
        //! flying instances
        jf.reset(new JetFly());
        nf.reset(new NoFly());
        sf.reset(new SimpleFly());
        
        //! quack instances
        sq.reset(new SimpleQuack());
        nq.reset(new NoQuack());
    }

    //! Strategies
    std::unique_ptr<IDisplayBehavior> gd;
    std::unique_ptr<IDisplayBehavior> sd;
    std::unique_ptr<IFlyingBehavior> jf;
    std::unique_ptr<IFlyingBehavior> nf;
    std::unique_ptr<IFlyingBehavior> sf;
    std::unique_ptr<IQuackingBehavior> sq;
    std::unique_ptr<IQuackingBehavior> nq;
};

TEST_F(StrategyTest, rubber)
{
    //! Rubber duck
    Duck rubberDuck("rubberduck", nq.get(), nf.get(), sd.get()); // No Quack, No Fly, String Display
    rubberDuck.executeDisplay();
    rubberDuck.executeQuack();
    rubberDuck.executeFly();
}

TEST_F(StrategyTest, mountain)
{
    //! Mountain duck
    Duck mountainDuck("mountainDuck", sq.get(), sf.get(), sd.get()); // Simple Quack, Jet Fly, String Display
    mountainDuck.executeDisplay();
    mountainDuck.executeQuack();
    mountainDuck.executeFly();
}

TEST_F(StrategyTest, cloud)
{
    //! Cloud duck
    Duck cloudDuck("cloudDuck", sq.get(), jf.get(), gd.get()); // Simple Quack, Jet Fly, Graphic Display
    cloudDuck.executeDisplay();
    cloudDuck.executeQuack();
    cloudDuck.executeFly();
}