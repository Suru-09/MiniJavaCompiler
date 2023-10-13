#ifndef __LOGGER_H__
#define __LOGGER_H__

#pragma once

#include <algorithm>
#include <string_view>
#include <string>
#include <filesystem>
#include <iostream>
#include <mutex>

namespace logger {

enum class log_level
{
   Debug = -1,
   Info = 0,
   Warning = 1,
   Error = 2,
   Mandatory = 3
};

static std::mutex logMutex;

std::string to_string(log_level level) noexcept;

void log(log_level level,
         std::string_view message,
         std::string_view file_name= std::filesystem::path(__builtin_FILE()).filename().c_str(),
         int line_number = __builtin_LINE(),
         std::string_view function_name = __builtin_FUNCTION()
        );

void setLogLevel(log_level level);

}   // namespace logger

#endif // __LOGGER_H__