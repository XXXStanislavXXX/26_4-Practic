#include "Window.h"
#include <algorithm>
#include <iostream>

Window::Window(int screenWidth, int screenHeight)
    : x(0), y(0), width(10), height(10), screenWidth(screenWidth), screenHeight(screenHeight) {}

void Window::move(int dx, int dy) {
    x = std::clamp(x + dx, 0, screenWidth - 1);
    y = std::clamp(y + dy, 0, screenHeight - 1);
    std::cout << "Window moved to (" << x << ", " << y << ").\n";
}

void Window::resize(int newWidth, int newHeight) {
    width = std::max(0, newWidth);
    height = std::max(0, newHeight);
    std::cout << "Window resized to " << width << "x" << height << ".\n";
}

int Window::getX() const { return x; }
int Window::getY() const { return y; }
int Window::getWidth() const { return width; }
int Window::getHeight() const { return height; }