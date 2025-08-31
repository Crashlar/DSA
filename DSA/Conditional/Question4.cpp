#include <iostream>
using namespace std;

void CheckGreater(int a , int b ){

    float area = a * b ;
    float perimeter = 2 *( a + b );
    if ( area > perimeter ){
        cout << "area is greater";
    }
    else
    {
        cout << "Perimeter is greater";
    }
    return ;
}


int main(){
    int length , breadth ; 
    cout<< "Enter the length : ";
    cin >> length;
    cout << "Enter the breadth : ";
    cin >> breadth;

    CheckGreater(length , breadth);
    return 0;
}
// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.