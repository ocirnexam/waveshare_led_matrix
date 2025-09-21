#include "led_matrix_connector/LEDMatrixConnector.hpp"
#include "rgb/RGBImage.hpp"

#include <iostream>

int main() {
    std::cout << "LED Matrix Connector WEB UI" << std::endl;

    LEDMatrixConnector connector;
    connector.Initialize();

    // Example usage
    rgb::RGBImage image(64, 32);
    // Fill the image with some color data here...

    connector.Draw(image);
    connector.Update();

    connector.Clear();
    connector.Update();

    return 0;
}