#include <iostream>

// Base class
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing shape! \n";
    };
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle! \n";
    };
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Rectangle! \n";
    };
};

int main() {
    Shape *shape;
    Circle circle;
    Rectangle rectangle;

    // Storing the address of circle
    shape = &circle;
    shape->draw();

    // Storing the address of rectangle
    shape = &rectangle;
    shape->draw();

    return 0;
}