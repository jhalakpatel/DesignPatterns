#include "Bridge.h"

View::View(IResource* resource) : mResource(resource) { }
LongFormView::LongFormView(IResource* resource) : View(resource) { }
ShortFormView::ShortFormView(IResource* resource) : View(resource) { }

void LongFormView::show()
{
    mResource->snippet();
    mResource->title();
    mResource->url();
    mResource->image();
}
void ShortFormView::show()
{
    mResource->snippet();
    mResource->title();
    mResource->url();
    mResource->image();
}

ArtistResource::ArtistResource(Artist artist) : mArtist(artist) { }
BookResource::BookResource(Book book) : mBook(book) { }

std::string ArtistResource::snippet()
{
    return mArtist.bio();
}
std::string ArtistResource::title()
{
    return mArtist.name();
}
std::string ArtistResource::url()
{
    return mArtist.url();
}
std::string ArtistResource::image()
{
    return mArtist.profilepic();
}
std::string BookResource::snippet()
{
    return mBook.cover();
}
std::string BookResource::title()
{
    return mBook.authorname();
}
std::string BookResource::url()
{
    return mBook.url();
}
std::string BookResource::image()
{
    return mBook.frontcover();
}