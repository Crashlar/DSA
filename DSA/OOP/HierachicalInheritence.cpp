#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void setDimensions(int a, int b) {
        length = a;
        width = b;
    }

protected:
    int length, width;
};

//class 1
class Rectangle : public Shape {
public:
    int area() {
        return length * width;
    }
};

//class 2
class Triangle : public Shape {
public:
    float area() {
        return 0.5 * length * width;
    }
};

int main() {
    Rectangle r;
    Triangle t;

    r.setDimensions(10, 5);
    t.setDimensions(10, 5);

    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Triangle Area: " << t.area() << endl;

    return 0;
}
