#include "Screen.h"
#include <iostream>

Screen::Screen(int width, int height) : width(width), height(height) {
    pixels = std::vector<std::vector<int>>(height, std::vector<int>(width, 0));
}

void Screen::render(const Window& window) {
    for (auto& row : pixels) {
        std::fill(row.begin(), row.end(), 0);
    }
    for (int i = 0; i < window.getHeight(); ++i) {
        for (int j = 0; j < window.getWidth(); ++j) {
            int px = window.getX() + j;
            int py = window.getY() + i;
            if (px < width && py < height) {
                pixels[py][px] = 1;
            }
        }
    }
}

void Screen::display() const {
    for (const auto& row : pixels) {
        for (int pixel : row) {
            std::cout << pixel;
        }
        std::cout << '\n';
    }
}