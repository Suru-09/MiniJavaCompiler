#include "logger/Logger.h"

static logger::log_level currentLogLevel = logger::log_level::Info;

void logger::log(log_level const level, 
         std::string_view const message,
         std::string_view const file_name/*= std::filesystem::path(__builtin_FILE()).filename().c_str()*/,
         int const line_number/* = __builtin_LINE()*/,
         std::string_view const function_name/*= __builtin_FUNCTION()*/     
        )
{
    std::lock_guard<std::mutex> lock(logMutex);
    
    // if the current log level is lower than the level of the message, do not log
    // but take into consideration that Error si E and ASCII value of E is 69
    // but Info is I and ASCII value of I is 73 and W is 87
    if(currentLogLevel > level)
    {
        if(level == log_level::Info || level == log_level::Warning)
        {
            return;
        }
    }

    std::cout
        << '<' << static_cast<char>(level) << '>' << ' '
        << file_name << "::" << function_name << "::" << line_number << '\t'
        << "Message: <" << message << ">" << '\n';
}

void logger::setLogLevel(log_level const level)
{
    currentLogLevel = level;
}