#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
    double perimeter() const override {
        return 2 * (width + height);
    }
};

int main() {
    Shape* circle = new Circle(5);
    Shape* rectangle = new Rectangle(4, 6);
    
    std::cout << "Circle area: " << circle->area() << std::endl;
    std::cout << "Circle perimeter: " << circle->perimeter() << std::endl;
    std::cout << "Rectangle area: " << rectangle->area() << std::endl;
    std::cout << "Rectangle perimeter: " << rectangle->perimeter() << std::endl;

    delete circle;
    delete rectangle;
    return 0;
}
