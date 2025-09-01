#include <iostream>
using namespace std;

float area(float r){
    return 3.1415 * r * r;
}

int main(){
    float radius; 
    cout << "Enter the radius : ";
    cin >> radius;

    cout << "Area of Circle : "<< area(radius)<< "Sq unit";
    return 0;
}

// Write a function that takes the radius of a circle as an argument and returns its area.