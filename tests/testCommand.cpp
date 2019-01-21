#include "testRunner.h"
#include "../src/Command.h"

auto t_command_log = spdlog::stdout_color_mt("t_command_log");

class CommandTest : public TestRunner 
{
protected:
    void SetUp() override
    {

    }
};

TEST_F(CommandTest, doUndo)
{
    //! Create resource;
    auto light = std::make_unique<Light>(Light());
    auto lonCmd = std::make_unique<LightOnCommand>(LightOnCommand(light.get()));
    auto loffCmd = std::make_unique<LightOffCommand>(LightOffCommand(light.get()));
    auto ldupCmd = std::make_unique<LightDimUpCommand>(LightDimUpCommand(light.get()));
    auto lddwnCmd = std::make_unique<LightDimDownCommand>(LightDimDownCommand(light.get()));

    t_command_log->info("Commands Created...");

    //! Create smart light with commands
    SmartLightInvoker philipsHue(lonCmd.get(), loffCmd.get(), ldupCmd.get(), lddwnCmd.get());

    t_command_log->info("Smart Light Created...");

    EXPECT_EQ(light->getState(), State::OFF);
    EXPECT_EQ(light->getBrightNess(), 0);

    //! create command sequence
    philipsHue.createSequence();

    t_command_log->info("Smart Light Command Sequence Created...");

    //! Execute do-sequence
    philipsHue.doSequence();

    t_command_log->info("Smart Light Command Do Sequence Done...");

    EXPECT_EQ(light->getState(), State::ON);
    EXPECT_EQ(light->getBrightNess(), 2);

    //! Execute undo-sequence
    philipsHue.undoSequence();

    t_command_log->info("Smart Light Command Un-Do Sequence Done...");

    EXPECT_EQ(light->getState(), State::OFF);
    EXPECT_EQ(light->getBrightNess(), 0);
}