#ifndef STRATEGY_H
#define STRATEGY_H
#include "common.h"

class IQuackingBehavior
{
public:
    virtual void quack(std::string s) = 0;
};

class IFlyingBehavior
{
public:
    virtual void fly(std::string s) = 0;
};

class IDisplayBehavior
{
public:
    virtual void display(std::string s) = 0;
};

//! Concrete Quaking classes
class SimpleQuack : public IQuackingBehavior
{
public:
    virtual void quack(std::string s) override;
};

class NoQuack : public IQuackingBehavior
{
public:
    virtual void quack(std::string s) override;
};

//! Concrete Flying behavior
class SimpleFly : public IFlyingBehavior
{
public:
    virtual void fly(std::string s) override;
};

class NoFly : public IFlyingBehavior
{
public:
    virtual void fly(std::string s) override;
};

class JetFly : public IFlyingBehavior
{
public:
    virtual void fly(std::string s) override;
};

//! Concrete display behavior
class GraphicDisplay : public IDisplayBehavior
{
public:
    virtual void display(std::string s) override;
};

class StringDisplay : public IDisplayBehavior
{
public:
    virtual void display(std::string s) override;
};

class Duck
{
public:
    Duck(std::string name, IQuackingBehavior* qb, IFlyingBehavior* fb, IDisplayBehavior* db) :
        mName(name), mQuack(qb), mFly(fb), mDisplay(db) { };

    void executeFly();
    void executeQuack();
    void executeDisplay();

private:
    std::string mName;
    IQuackingBehavior* mQuack;
    IFlyingBehavior* mFly;
    IDisplayBehavior* mDisplay;
};

#endif // STRATEGY_H