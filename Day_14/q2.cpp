#include <iostream>

class Rectangle {
public:
    int width;
    int height;

    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
    }

    int area() {
        return width * height;
    }

    void displayInfo() {
        std::cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << std::endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    rect1.displayInfo();
    Rectangle rect2 = rect1;
    rect2.displayInfo();
    return 0;
}
