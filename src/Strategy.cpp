#include "Strategy.h"

void SimpleQuack::quack(std::string s)
{
    spdlog::info("{}: SimpleQuack", s);
}

void NoQuack::quack(std::string s)
{
    spdlog::info("{}: NoQuack", s);
}

void SimpleFly::fly(std::string s)
{
    spdlog::info("{}: SimpleFly", s);
}

void NoFly::fly(std::string s)
{
    spdlog::info("{}: NoFly", s);
}

void JetFly::fly(std::string s)
{
    spdlog::info("{}: JetFly", s);
}

void GraphicDisplay::display(std::string s)
{
    spdlog::info("{}: GraphicDisplay", s);
}

void StringDisplay::display(std::string s)
{
    spdlog::info("{}: StringDisplay", s);
}

void Duck::executeDisplay()
{
    mDisplay->display(mName);
}

void Duck::executeFly()
{
    mFly->fly(mName);
}

void Duck::executeQuack()
{
    mQuack->quack(mName);
}