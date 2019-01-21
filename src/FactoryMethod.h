#include "common.h"

//! Abstract class - Can not be instantiated. Have atleast one pure virtual function. Can have data member.
//! Interface - Can not be instantiated. All functions are pure virtual function. No data member.
class AbstractProduct
{
public:
    AbstractProduct(int pid);
    virtual int getPid();
    virtual float getPrice() = 0;
private:
    int mPid;
    float mPrice;
};

class ConcreteProduct1 : public AbstractProduct
{
public:
    ConcreteProduct1(int pid);
    virtual float getPrice() override;
};

class ConcreteProduct2 : public AbstractProduct
{
public:
    ConcreteProduct2(int pid);
    virtual float getPrice() override;
};

class AbstractFactory
{
};

class ConcreteFactory1 : public AbstractFactory
{
public:
    ConcreteFactory1();
    virtual ConcreteProduct1 createProduct();
};

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();
    virtual ConcreteProduct2 createProduct();
};