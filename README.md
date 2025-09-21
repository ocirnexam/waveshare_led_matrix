# Waveshare LED Matrix

This project provides a C++ interface to control a Waveshare LED Matrix on a Raspberry Pi. It includes classes for managing RGB images and connecting to the LED matrix hardware.

## Features
- RGB image handling with pixel manipulation.
- LED matrix connector for initializing, clearing, drawing, and updating the display.   

## Requirements
- Raspberry Pi with GPIO access.
- C++11 or later.

## Installation
1. Clone the repository:
   ```bash
   git clone
    cd led_matrix
    ```
2. Build the project using CMake.
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```
3. Run the preferred executable from the `build` directory. (e.g., `./led_matrix_cli` or `./led_matrix_web`)

