#ifndef LOGGER_H
#define LOGGER_H

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

/*
class Logger
{
public:
    static spdlog::logger* getInstance()
    {
        if (!mLogger.get())
        {
            //! construct logger
            Logger();
        }
        return mLogger.get();
    }
private:
    Logger()
    {     
        auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
        console_sink->set_level(spdlog::level::warn); 
        mLogger.reset(new spdlog::logger("console_sink", {console_sink}));
    }
    static std::unique_ptr<spdlog::logger> mLogger;
};
*/

#endif // LOGGER_H