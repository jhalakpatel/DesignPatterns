#include "testRunner.h"
#include "../src/Bridge.h"

class BridgeTest : public TestRunner
{
protected:
    void SetUp() override
    {
    }
    Artist artist;
    Book book;
};

TEST_F(BridgeTest, Basic)
{
    ArtistResource artRes(artist);
    BookResource bookRes(book);

    LongFormView lfv(&artRes);
    ShortFormView sfv(&bookRes);

    lfv.show();
    sfv.show();
}