#ifndef WINDOW_H
#define WINDOW_H

class Window {
private:
    int x, y; // Координаты верхнего левого угла
    int width, height; // Размеры окна
    const int screenWidth, screenHeight; // Размеры экрана

public:
    Window(int screenWidth, int screenHeight);

    void move(int dx, int dy);
    void resize(int newWidth, int newHeight);
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;
};

#endif // WINDOW_H