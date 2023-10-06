#include "logger/Logger.h"

void logger::log(log_level const level, 
         std::string_view const message,
         std::string_view const file_name/*= std::filesystem::path(__builtin_FILE()).filename().c_str()*/,
         int const line_number/* = __builtin_LINE()*/,
         std::string_view const function_name/*= __builtin_FUNCTION()*/     
        )
{
    std::lock_guard<std::mutex> lock(logMutex);
    
    std::cout
        << '<' << static_cast<char>(level) << '>' << ' '
        << file_name << "::" << function_name << "::" << line_number << '\t'
        << "Message: <" << message << ">" << '\n';
}