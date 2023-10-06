#ifndef __LOGGER_H__
#define __LOGGER_H__

#pragma once

#include <algorithm>
#include <string_view>
#include <filesystem>
#include <iostream>
#include <mutex>

namespace logger {

enum class log_level : char
{
   Info = 'I',
   Warning = 'W',
   Error = 'E'
};

static std::mutex logMutex;

void log(log_level const level, 
         std::string_view const message,
         std::string_view const file_name= std::filesystem::path(__builtin_FILE()).filename().c_str(),
         int const line_number = __builtin_LINE(),
         std::string_view const function_name = __builtin_FUNCTION()     
        );

}   // namespace logger

#endif // __LOGGER_H__