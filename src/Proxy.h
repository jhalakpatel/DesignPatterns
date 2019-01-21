//! Defn: Provides a surrogate or placeholder for another object to control access to it.
//! Does not change the interface, but kind of intercept the call.

//! Remote Proxy - Something in remote server or remote resoruce interaction.
//! Virtual Proxy - Control access to a resource that is expensive to create like a cache.
//! Protection Proxy - Used for access management based on access rights.

//! Intent is to control the access the underlying objects.
//! but we dont want to change the interface.

//! This example implements virtual proxy.
//! i.e. implement a caching of an object which is expensive
//! to create. Hide the expensive instantiation of expensive
//! object.
#include "common.h"

class IBookParser
{
public:
    virtual int getNumPages() = 0;
};

class BookParser : public IBookParser
{
public:
    BookParser(std::string book);
    virtual int getNumPages() override;
private:
    std::string mBook;
};

class LazyBookParserProxy : public IBookParser
{
public:
    LazyBookParserProxy(std::string book);
    virtual int getNumPages() override;
private:
    std::string mBook{nullptr};
    std::unique_ptr<BookParser> mBookParser{nullptr};
};