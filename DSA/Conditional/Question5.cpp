
#include <iostream>
using namespace std;

int main(){
    float side1 , side2  , side3 ;
    cout << "Enter the side1 of length :";
    cin >> side1;
    cout << "Enter the side2 of length :";
    cin >> side2;
    cout << "Enter the side3 of length :";
    cin >> side3;
    // Equilateral triangle: All three sides are equal.

    if (side1 == side2 && side2 == side3)
    {
        cout << "Equilateral triangle";
    }
    else
    {
        // Isosceles triangle: All two sides are equal.
        if ((side1 == side2) || (side2 == side3) || (side3 == side1))
        {
            cout << "Isosceles Triangle ";
        }
        else{
            // Scalene triangle: No sides are equal.
            if (side1 != side2 && side2 != side3 && side3 != side1){
                cout << "Scalene Triangle";
            }
            else{
                cout << "Nothing here";
            }
        }
        
    }
    

    return 0;
}

// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.


