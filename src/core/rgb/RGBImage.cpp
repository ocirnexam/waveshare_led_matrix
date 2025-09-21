#include "RGBImage.hpp"
#include <algorithm>

using namespace rgb;

RGBImage::RGBImage(uint8_t width, uint8_t height) : width(width), height(height) {
    data = new RGBPixel[width * height]();
    Clear();
}

RGBImage::~RGBImage() {
    delete[] data;
}

int RGBImage::GetWidth() const {
    return width;
}

int RGBImage::GetHeight() const {
    return height;
}

RGBPixel RGBImage::GetPixel(uint8_t x, uint8_t y) const {
    return data[y * width + x];
}

void RGBImage::SetPixel(uint8_t x, uint8_t y, uint8_t r, uint8_t g, uint8_t b) {
    if (x < 0 || x >= width || y < 0 || y >= height) return;
    data[y * width + x] = RGBPixel(r, g, b);
}

void RGBImage::Clear() {
    for (int i = 0; i < width * height; ++i) {
        data[i] = RGBPixel(0, 0, 0);
    }
}