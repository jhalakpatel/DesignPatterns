#include "Facade.h"

void Light::on() { spdlog::info("Light on"); }
void Light::off() { spdlog::info("Light off"); }

void Screen::on() { spdlog::info("Screen on"); }
void Screen::off() { spdlog::info("Screen off"); }

void DVD::insert() { spdlog::info("DVD insert"); }
void DVD::eject() { spdlog::info("DVD eject"); }

Amp::Amp() {}

void Amp::setDVD(DVD dvd)
{
    spdlog::info("Amp setDVD");
    mDVD = dvd;
}
void Amp::on()
{
    spdlog::info("Amp on");
    mDVD.insert();
}
void Amp::off()
{
    spdlog::info("Amp off");
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
    spdlog::info("[FACADE] Watch Movie..");
    mScreen.on();
    mLight.off();
    mAmp.setDVD(mDVD);  
    mAmp.on();
}

void HomeTheatreFacade::endMovie()
{
    spdlog::info("[FACADE] End Movie..");
    mAmp.off();
    mScreen.off();
    mLight.on();
}