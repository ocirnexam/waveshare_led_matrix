cmake_minimum_required(VERSION 3.10)

project(led_matrix)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(led_matrix
    src/ui/cli/main.cpp
    src/core/led_matrix_connector/LEDMatrixConnector.cpp
    src/core/led_matrix_connector/LEDMatrixConnector.hpp
    src/core/rgb_image/RGBImage.cpp
    src/core/rgb_image/RGBImage.hpp
)
target_include_directories(led_matrix PUBLIC src/core)