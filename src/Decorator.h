#include "common.h"

//! Decorator pattern provide a wrapper on top of abstract
//! product. Wrapper will create additional behavior
//! to concrete productA

//! Abstract class product. Can not be instantiated.
class AbstractProduct
{
public:
    virtual int cost() = 0; //! pure virtual function
    virtual void description(); 
};

//! Base product A
class ConcreteProductA : public AbstractProduct
{
public:
    ConcreteProductA();
    virtual int cost() override;
    virtual void description() override;
};

//! Base product B
class ConcreteProductB : public AbstractProduct
{
public:
    ConcreteProductB();
    virtual int cost() override;
    virtual void description() override;
};

//! Decorator pattern has is-A and has-A relationship
class AddOnAbstractDecorator : public AbstractProduct 
{
};

//! DecoratorA
class ConcreteDecoratorA : public AddOnAbstractDecorator
{
public:
    ConcreteDecoratorA(AbstractProduct*);

    virtual int cost() override;
    virtual void description() override;
private:
    //! concreteDecoratorA has a product.
    AbstractProduct* mAbstractProduct;
};

//! concreteDecoratorB is a product.
class ConcreteDecoratorB : public AddOnAbstractDecorator
{
public:
    ConcreteDecoratorB(AbstractProduct*);

    virtual int cost() override;
    virtual void description() override;
private:
    //! ConcreteDecoratorB has a product.
    AbstractProduct* mAbstractProduct;
};