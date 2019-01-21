
//! Defn: Adapter pattern is a simple wrapper pattern.
//!       It wraps a signature into another signature 
//!       i.e. we can call an adaptee with a specific signature, with a new adapter signature.
//!       It does not change the behavior.
#include "common.h"

class Adaptee
{
public:
    //! arg order - int, string
    void request(int value, std::string name);
};

class ITarget
{
public:
    //! arg order - string, int
    virtual void request(std::string name, int value) = 0;
};

class Adapter : public ITarget
{
public:
    Adapter(Adaptee);
    virtual void request(std::string name, int value) override;
private:
    Adaptee mAdaptee;
};