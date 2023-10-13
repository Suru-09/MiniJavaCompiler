#include "logger/Logger.h"

static logger::log_level currentLogLevel = logger::log_level::Info;

std::string logger::to_string(logger::log_level level) noexcept
{
    switch (level)
    {
    case logger::log_level::Debug:
        return "Debug";
    case logger::log_level::Info:
        return "Info";
    case logger::log_level::Warning:
        return "Warning";
    case logger::log_level::Error:
        return "Error";
    case logger::log_level::Mandatory:
        return "M";
    default:
        return "Unknown";
    }
}

void logger::log(log_level const level, 
         std::string_view const message,
         std::string_view const file_name/*= std::filesystem::path(__builtin_FILE()).filename().c_str()*/,
         int const line_number/* = __builtin_LINE()*/,
         std::string_view const function_name/*= __builtin_FUNCTION()*/     
        )
{
    std::lock_guard<std::mutex> lock(logMutex);

    if(currentLogLevel > level)
    {
        return;
    }

    std::cout
        << '<' << logger::to_string(level) << '>' << ' '
        << file_name << "::" << function_name << "::" << line_number << '\t'
        << "Message: <" << message << ">" << '\n';
}

void logger::setLogLevel(log_level const level)
{
    currentLogLevel = level;
}