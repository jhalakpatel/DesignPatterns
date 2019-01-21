#ifndef OBSERVER_H
#define OBSERVER_H

class IObserver
{
public:
    IObserver(std::string name) : mName(name) {}
    virtual void update() = 0;
    std::string getName() { return mName; }
private:
    std::string mName;
};

class IObservable
{
public:
    //! Register observers
    virtual void add(IObserver* observer) = 0;
    //! Unregister observers
    virtual void remove(IObserver* observer) = 0;
    //! Notify all registered observers
    virtual void notify() = 0;
};

class WeatherStation : public IObservable
{
public:
    virtual void add(IObserver* observer) override;
    virtual void remove(IObserver* observer) override;
    virtual void notify() override;
    float getTemprature();
private:
    const float mTemp = 37.5;
    std::unordered_set<IObserver*> mObservers;
};

class IDisplay
{
public:
    virtual void display() = 0;
};

class WindowDisplay : public IObserver, public IDisplay
{
public:
    //! Register Observable object i.e. Weather station
    WindowDisplay(WeatherStation* ws)
        : IObserver("WindowDisplay"),
          mWeatherStation(ws) {}
    virtual void display() override;
    virtual void update() override;
private:
    //! Registered observable object
    WeatherStation* mWeatherStation;
};

class PhoneDisplay : public IObserver, public IDisplay
{
public:
    //! Register Observable object i.e. Weather station
    PhoneDisplay(WeatherStation* ws) 
        : IObserver("PhoneDisplay"),
          mWeatherStation(ws) {}
    virtual void display() override;
    virtual void update() override;
private:
    //! Registered observable object
    WeatherStation* mWeatherStation;
};

#endif // OBSERVER_H