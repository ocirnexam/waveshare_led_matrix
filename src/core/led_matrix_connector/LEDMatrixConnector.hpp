#ifndef __LED_MATRIX_CONNECTOR_HPP_INCLUDED
#define __LED_MATRIX_CONNECTOR_HPP_INCLUDED

#include "rgb/RGBImage.hpp"

class LEDMatrixConnector {
    private:
        void SetPixel(int x, int y, int r, int g, int b);

    public:
        LEDMatrixConnector();
        ~LEDMatrixConnector();

        void Initialize();
        void Clear();
        void Draw(rgb::RGBImage& image);
        void Update();
};

#endif // __LED_MATRIX_CONNECTOR_HPP_INCLUDED