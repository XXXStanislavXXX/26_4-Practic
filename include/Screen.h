#ifndef SCREEN_H
#define SCREEN_H

#include "Window.h"
#include <vector>
#include <string>

class Screen {
private:
    int width, height;
    std::vector<std::vector<int>> pixels;

public:
    Screen(int width, int height);
    void render(const Window& window);
    void display() const;
};

#endif // SCREEN_H