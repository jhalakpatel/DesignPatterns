#include "Proxy.h"

auto proxy_console = spdlog::stdout_color_mt("proxy_console");
using namespace std::chrono_literals;

BookParser::BookParser(std::string book) : mBook(book)
{
    proxy_console->info("[BookParser] Start Instantiation");
    std::this_thread::sleep_for(2s);
    proxy_console->info("[BookParser] End Instantiation");
}

int BookParser::getNumPages()
{
    std::this_thread::sleep_for(100ms);
    return 1000;
}

LazyBookParserProxy::LazyBookParserProxy(std::string book) : mBook(book)
{
    proxy_console->info("[LazyBookParserProxy] Instantiate Lazy Book Parser");
}

int LazyBookParserProxy::getNumPages()
{
    proxy_console->info("[LazyBookParserProxy] getNumPages Lazy Book Parser");
    if (!mBookParser)
    {
        mBookParser.reset(new BookParser(mBook));
    }
    return mBookParser->getNumPages();
}