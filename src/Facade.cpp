#include "Facade.h"

auto facade_console = spdlog::stdout_color_mt("facade_console");

void Light::on() { facade_console->info("Light on"); }
void Light::off() { facade_console->info("Light off"); }

void Screen::on() { facade_console->info("Screen on"); }
void Screen::off() { facade_console->info("Screen off"); }

void DVD::insert() { facade_console->info("DVD insert"); }
void DVD::eject() { facade_console->info("DVD eject"); }

Amp::Amp() {}

void Amp::setDVD(DVD dvd)
{
    facade_console->info("Amp setDVD");
    mDVD = dvd;
}
void Amp::on()
{
    facade_console->info("Amp on");
    mDVD.insert();
}
void Amp::off()
{
    facade_console->info("Amp off");
    mDVD.eject();
}

HomeTheatreFacade::HomeTheatreFacade(Light light, Screen screen, DVD dvd, Amp amp) : 
    mLight(light),
    mScreen(screen),
    mDVD(dvd),
    mAmp(amp)
{
}

void HomeTheatreFacade::watchMovie()
{
    facade_console->info("[FACADE] Watch Movie..");
    mScreen.on();
    mLight.off();
    mAmp.setDVD(mDVD);  
    mAmp.on();
}

void HomeTheatreFacade::endMovie()
{
    facade_console->info("[FACADE] End Movie..");
    mAmp.off();
    mScreen.off();
    mLight.on();
}