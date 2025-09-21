#ifndef __RGB_IMAGE_HPP_INCLUDED
#define __RGB_IMAGE_HPP_INCLUDED

class RGBImage {
    private:
        int width;
        int height;
        unsigned char* data;

    public:
        RGBImage(int width, int height);
        ~RGBImage();

        int GetWidth() const;
        int GetHeight() const;
        unsigned char* GetData() const;

        void SetPixel(int x, int y, int r, int g, int b);
        void Clear();
};

#endif