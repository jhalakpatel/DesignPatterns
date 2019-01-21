#include "common.h"

//! Defn: Its a simpler interface over complicated class dependencies.

class Light
{
public:
    void on();
    void off();
};

class Screen
{
public:
    void on();
    void off();
};

class DVD
{
public:
    void insert();
    void eject();
};

class Amp
{
public:
    Amp();
    void setDVD(DVD);
    void on();
    void off();
private:
    DVD mDVD;
};

class HomeTheatreFacade
{
public:
    HomeTheatreFacade(Light, Screen, DVD, Amp);
    void watchMovie();
    void endMovie();
private:
    Light mLight;
    Screen mScreen;
    DVD mDVD;
    Amp mAmp;
};