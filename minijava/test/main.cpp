#include <iostream>
#include "gtest/gtest.h"

#include "logger/Logger.h"

int main(int argc, char **argv) {
    logger::setLogLevel(logger::log_level::Info);

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}