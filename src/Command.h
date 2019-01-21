#include "common.h"

//! Forward declaration
class ICommand;
class Light;

//! Light State
enum class State { ON, OFF };

class SmartLightInvoker
{
public:
    //! Construct the smart light with suitable commands
    SmartLightInvoker(ICommand*, ICommand*, ICommand*, ICommand*);
    void createSequence();
    void doSequence();
    void undoSequence();
private:
    ICommand* mTurnOnCmd;
    ICommand* mTurnOffCmd;
    ICommand* mDimUpCmd;
    ICommand* mDimDownCmd;
    std::deque<ICommand*> mCommandSeqeunce;
};

class ICommand
{
public:
    virtual void execute() = 0;
    virtual void unexecute() = 0;
};

class LightOnCommand : public ICommand
{
public:
    LightOnCommand(Light* light);
    virtual void execute();
    virtual void unexecute();
private:
    Light* mLight;
};

class LightOffCommand : public ICommand
{
public:
    LightOffCommand(Light* light);
    virtual void execute();
    virtual void unexecute();
private:
    Light* mLight;
};

class LightDimUpCommand : public ICommand
{
public:
    LightDimUpCommand(Light* light);
    virtual void execute();
    virtual void unexecute();
private:
    Light* mLight;
};

class LightDimDownCommand : public ICommand
{
public:
    LightDimDownCommand(Light* light);
    virtual void execute();
    virtual void unexecute();
private:
    Light* mLight;  
};

//! Lightweight receiver class
class Light
{
public:
    Light();
    void On();
    void Off();
    void DimUp();
    void DimDown();
    State getState();
    int getBrightNess();
private:
    int mBrightness{0};
    State mState{State::OFF};
};