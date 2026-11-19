
#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual double calculateArea() = 0;

    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() override {
        return 3.142 * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Circle circle1(7);
    Rectangle rectangle1(10, 5);

    // Base class pointer
    Shape* ptr;

    ptr = &circle1;
    cout << "Area of Circle: "
         << ptr->calculateArea() << endl;

    ptr = &rectangle1;
    cout << "Area of Rectangle: "
         << ptr->calculateArea() << endl;

    return 0;
}
