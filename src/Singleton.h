#ifndef SINGLETON_H
#define SINGLETON_H

#include "common.h"

//! Singleton class
class Singleton
{
public:
    //! get Instance of singleton class.
    static Singleton* getInstance();
    std::string getName();
    void useCount();
private:
    //! private constructor
    Singleton(std::string);
    std::string mName;
    static int gInstCount;
    //! RAII Singleton instance
    static std::unique_ptr<Singleton> gInstance;
};

#endif // SINGLETON_H