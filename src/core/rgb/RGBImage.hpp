#ifndef __RGB_IMAGE_HPP_INCLUDED
#define __RGB_IMAGE_HPP_INCLUDED

#include <cstdint>
#include "RGBPixel.hpp"

namespace rgb
{
    class RGBImage
    {
    private:
        uint8_t width;
        uint8_t height;
        RGBPixel *data;

    public:
        RGBImage(uint8_t width, uint8_t height);
        ~RGBImage();

        int GetWidth() const;
        int GetHeight() const;
        RGBPixel GetPixel(uint8_t x, uint8_t y) const;

        void SetPixel(uint8_t x, uint8_t y, uint8_t r, uint8_t g, uint8_t b);
        void Clear();
    };
}
#endif