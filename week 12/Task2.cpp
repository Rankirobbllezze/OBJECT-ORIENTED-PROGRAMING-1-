#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0; 
};

class Circle : public Shape {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    void calculateArea() {
        double area = 3.14159 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    double length, width;

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    shapePtr = &circle;
    shapePtr->calculateArea();

    shapePtr = &rectangle;
    shapePtr->calculateArea();

    return 0;
}