
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape\n";
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle\n";
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle\n";
    }
};

int main() {
    Shape* ptr;

    Circle circle1;
    Rectangle rectangle1;
    Triangle triangle1;

    // Point to Circle
    ptr = &circle1;
    ptr->draw();

    // Point to Rectangle
    ptr = &rectangle1;
    ptr->draw();

    // Point to Triangle
    ptr = &triangle1;
    ptr->draw();

    return 0;
}
