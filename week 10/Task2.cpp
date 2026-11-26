#include <iostream>
using namespace std;

class shape {
public:
    virtual void  draw() {
        cout << "Drawing a shape" << endl;
    }

};

class Circle : public shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public shape {
public:
    void draw() {
        cout << "Drawing a rectangle" << endl;
    }
};

class Triangle : public shape {
public:
    void draw() {
        cout << "Drawing a triangle" << endl;
    }
};

int main() {
    shape* shapePtr;

    Circle c;
    Rectangle r;
    Triangle t;

    shapePtr = &c;
    shapePtr->draw();

    shapePtr = &r;
    shapePtr->draw();

    shapePtr = &t;
    shapePtr->draw();

    return 0;
}