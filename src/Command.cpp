#include "Command.h"

auto core_command_log = spdlog::stdout_color_mt("core_command_log");

//! Implementation of Light class
Light::Light() {}

void Light::On()
{
    mState = State::ON;
}
void Light::Off()
{
    mState = State::OFF;
}
void Light::DimUp()
{
    mBrightness++;
}
void Light::DimDown()
{
    mBrightness--;
}
State Light::getState()
{
    core_command_log->info("Current State: {}", int(mState));
    return mState;
}
int Light::getBrightNess()
{
    core_command_log->info("Brightness: {}", mBrightness);
    return mBrightness;
}

//! Smart Bulb
SmartLightInvoker::SmartLightInvoker(ICommand* turnOnCmd, ICommand* turnOffCmd, ICommand* dimUpCmd, ICommand* dimDownCmd) : 
    mTurnOnCmd(turnOnCmd),
    mTurnOffCmd(turnOffCmd),
    mDimUpCmd(dimUpCmd),
    mDimDownCmd(dimDownCmd)
{
}

void SmartLightInvoker::createSequence()
{
    mCommandSeqeunce = {mTurnOnCmd, mDimUpCmd, mDimUpCmd, mDimUpCmd, mDimDownCmd, mDimDownCmd, mDimUpCmd};
}

void SmartLightInvoker::doSequence()
{
    for (auto command : mCommandSeqeunce)
    {
        command->execute();
    }
}

void SmartLightInvoker::undoSequence()
{
    for (auto command : mCommandSeqeunce)
    {
        command->unexecute();
    }
}

//! Command constructors
LightOnCommand::LightOnCommand(Light* light) : mLight(light) {}
LightOffCommand::LightOffCommand(Light* light) : mLight(light) {}
LightDimUpCommand::LightDimUpCommand(Light* light) : mLight(light) {}
LightDimDownCommand::LightDimDownCommand(Light* light) : mLight(light) {}

void LightOnCommand::execute()
{
    mLight->On();
}

void LightOnCommand::unexecute()
{
    mLight->Off();
}

void LightOffCommand::execute()
{
    mLight->Off();
}

void LightOffCommand::unexecute()
{
    mLight->On();  
}

void LightDimUpCommand::execute()
{
    mLight->DimUp();
}

void LightDimUpCommand::unexecute()
{
    mLight->DimDown();
}

void LightDimDownCommand::execute()
{
    mLight->DimDown();
}

void LightDimDownCommand::unexecute()
{
    mLight->DimUp();
}