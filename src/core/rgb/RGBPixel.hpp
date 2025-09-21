#ifndef __RGB_PIXEL_HPP_INCLUDED
#define __RGB_PIXEL_HPP_INCLUDED

#include <cstdint>

namespace rgb
{
    struct RGBPixel
    {
        unsigned char r;
        unsigned char g;
        unsigned char b;

        RGBPixel() : r(0), g(0), b(0) {}
        RGBPixel(uint8_t red, uint8_t green, uint8_t blue) : r(red), g(green), b(blue) {}

        uint8_t getRed() const { return r; }
        uint8_t getGreen() const { return g; }
        uint8_t getBlue() const { return b; }
    };
}

#endif