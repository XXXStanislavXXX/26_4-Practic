#include "Window.h"
#include "Screen.h"
#include <iostream>
#include <string>

int main() {
    const int screenWidth = 80;
    const int screenHeight = 50;

    Window window(screenWidth, screenHeight);
    Screen screen(screenWidth, screenHeight);

    std::string command;
    while (true) {
        std::cout << "Enter command (move, resize, display, close): ";
        std::cin >> command;

        if (command == "move") {
            int dx, dy;
            std::cout << "Enter dx and dy: ";
            std::cin >> dx >> dy;
            window.move(dx, dy);
        } else if (command == "resize") {
            int newWidth, newHeight;
            std::cout << "Enter new width and height: ";
            std::cin >> newWidth >> newHeight;
            window.resize(newWidth, newHeight);
        } else if (command == "display") {
            screen.render(window);
            screen.display();
        } else if (command == "close") {
            std::cout << "Closing program.\n";
            break;
        } else {
            std::cout << "Unknown command.\n";
        }
    }

    return 0;
}