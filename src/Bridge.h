//! Defn: Decouple an abstraction from its implementation so that two can vary independently.

#include "common.h"

//! Generic Resource Interface
class IResource
{
public:
    virtual std::string snippet() = 0;
    virtual std::string image() = 0;
    virtual std::string url() = 0;
    virtual std::string title() = 0;
};

//! Abstraction
class View
{
public:
    View(IResource* resource);   //! Dependency Injection - Inject implementation to an abstraction.
    virtual void show() = 0;    
protected:
    IResource* mResource;
};

class LongFormView : public View
{
public:
    LongFormView(IResource* resource);
    virtual void show() override;
};

class ShortFormView : public View
{
public:
    ShortFormView(IResource* resource);
    virtual void show() override;
};

//! Concrete Media
class Artist
{
public:
    std::string bio() { return "bio"; }
    std::string name() { return "name"; }
    std::string url() { return "url"; }
    std::string profilepic() { return "pic"; }
};

class Book
{
public:
    std::string cover() { return "cover"; }
    std::string authorname() { return "name"; }
    std::string url() { return "url"; }
    std::string frontcover() { return "frontcoverr"; }
};

//! Concreate Media Resources
class ArtistResource : public IResource
{
public:
    ArtistResource(Artist); //! Dependency Injection
    virtual std::string snippet() override;
    virtual std::string title() override;
    virtual std::string url() override;
    virtual std::string image() override;
private:
    Artist mArtist;
};

class BookResource : public IResource
{
public:
    BookResource(Book); //! Dependency Injection
    virtual std::string snippet() override;
    virtual std::string image() override;
    virtual std::string url() override;
    virtual std::string title() override;
private:
    Book mBook;
};