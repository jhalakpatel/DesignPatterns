#include "testRunner.h"
#include "../src/AbstractFactory.h"

class AbstractFactoryTest : public TestRunner
{
protected:
    void SetUp() override
    {
    }
};

TEST_F(AbstractFactoryTest, SetupWindows)
{
    Windows windows("windows");
    auto ui = windows.createUI();
    auto libs = windows.createLibs();
    ui->getUIName();
    libs->getLibsVersion();
}

TEST_F(AbstractFactoryTest, SetupLinux)
{
    Linux linux("windows");
    auto ui = linux.createUI();
    auto libs = linux.createLibs();
    ui->getUIName();
    libs->getLibsVersion();}

TEST_F(AbstractFactoryTest, SetupMacOS)
{
    MacOS macos("windows");
    auto ui = macos.createUI();
    auto libs = macos.createLibs();
    ui->getUIName();
    libs->getLibsVersion();
}