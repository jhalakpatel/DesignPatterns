#include "Strategy.h"

//! Create console
auto stg_console = spdlog::stdout_color_mt("stg_console");

void SimpleQuack::quack(std::string s)
{
    stg_console->info("{}: SimpleQuack", s);
}

void NoQuack::quack(std::string s)
{
    stg_console->info("{}: NoQuack", s);
}

void SimpleFly::fly(std::string s)
{
    stg_console->info("{}: SimpleFly", s);
}

void NoFly::fly(std::string s)
{
    stg_console->info("{}: NoFly", s);
}

void JetFly::fly(std::string s)
{
    stg_console->info("{}: JetFly", s);
}

void GraphicDisplay::display(std::string s)
{
    stg_console->info("{}: GraphicDisplay", s);
}

void StringDisplay::display(std::string s)
{
    stg_console->info("{}: StringDisplay", s);
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