cmake_minimum_required(VERSION 3.10)

project(led_matrix)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(led_matrix_core
    src/core/led_matrix_connector/LEDMatrixConnector.cpp
    src/core/led_matrix_connector/LEDMatrixConnector.hpp
    src/core/rgb_image/RGBImage.cpp
    src/core/rgb_image/RGBImage.hpp
)
target_include_directories(led_matrix_core PUBLIC src/core)

add_executable(led_matrix_cli
    src/ui/cli/main.cpp
)
target_link_libraries(led_matrix_cli led_matrix_core)

add_executable(led_matrix_web
    src/ui/web/main.cpp
)
target_link_libraries(led_matrix_web led_matrix_core)