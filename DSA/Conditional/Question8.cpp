
// 0.5 * abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of third point (x3 y3): ";
    cin >> x3 >> y3;

    // Calculate area of triangle using determinant method
    float area = 0.5 * abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    if (area == 0) {
        cout << "Yes, all three points lie on a straight line." << endl;
    } else {
        cout << "Nope, these points are not on the same line." << endl;
    }

    return 0;
}



// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line