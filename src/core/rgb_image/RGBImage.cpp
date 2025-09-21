#include "RGBImage.hpp"
#include <algorithm>

RGBImage::RGBImage(int width, int height) : width(width), height(height) {
    data = new unsigned char[width * height * 3]();
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

unsigned char* RGBImage::GetData() const {
    return data;
}

void RGBImage::SetPixel(int x, int y, int r, int g, int b) {
    if (x < 0 || x >= width || y < 0 || y >= height) return;
    int index = (y * width + x) * 3;
    data[index] = static_cast<unsigned char>(r);
    data[index + 1] = static_cast<unsigned char>(g);
    data[index + 2] = static_cast<unsigned char>(b);
}

void RGBImage::Clear() {
    std::fill(data, data + (width * height * 3), 0);
}