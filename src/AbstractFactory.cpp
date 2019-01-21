#include "AbstractFactory.h"

auto abf_console = spdlog::stdout_color_mt("abf_console");

OS::OS(const char* os) : mOS(os) { }
Windows::Windows(const char* os) : OS(os) { } 
Linux::Linux(const char* os) : OS(os) { } 
MacOS::MacOS(const char* os) : OS(os) { }

UI::UI() { }
Libs::Libs() { }

WinUI::WinUI() : UI() { }
WinLibs::WinLibs() : Libs() { }

MacUI::MacUI() : UI() { }
MacLibs::MacLibs() : Libs() { }

LinuxUI::LinuxUI() : UI() { }
LinuxLibs::LinuxLibs() : Libs() { }

//! Windows product
void WinUI::getUIName()
{
    abf_console->info("WinUI");
}

void WinLibs::getLibsVersion()
{
    abf_console->info("RS1-14393");
}

//! Linux product
void LinuxUI::getUIName()
{
    abf_console->info("LinuxUI");
}

void LinuxLibs::getLibsVersion()
{
    abf_console->info("Linux-18.04");
}

//! Mac product
void MacUI::getUIName()
{
    abf_console->info("MacUI");
}

void MacLibs::getLibsVersion()
{
    abf_console->info("Mac-Sierra");
}

//! Create windows related stuff
//! make_unique says - never say new() or delete()
std::unique_ptr<UI> Windows::createUI()
{
    return std::make_unique<WinUI>(WinUI());
}

std::unique_ptr<Libs> Windows::createLibs()
{
    return std::make_unique<WinLibs>(WinLibs());
}

//! Create linux related stuff
std::unique_ptr<UI> Linux::createUI()
{
    return std::make_unique<LinuxUI>(LinuxUI());
}

std::unique_ptr<Libs> Linux::createLibs()
{
    return std::make_unique<LinuxLibs>(LinuxLibs());
}

//! Create mac related stuff
std::unique_ptr<UI> MacOS::createUI()
{
    return std::make_unique<MacUI>(MacUI());
}

std::unique_ptr<Libs> MacOS::createLibs()
{
    return std::make_unique<MacLibs>(MacLibs());
}