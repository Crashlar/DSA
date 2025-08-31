#include <iostream>
using namespace std;

void predict(float r){
    float circum = 2 * 3.1415 * r;
    float area = 3.1415 * r * r ; 

    if (circum > area){
        cout << "Circumferenece is greater";
    }
    else
    {
        cout << "Area is greater";
    }
    
}


int main(){
    float radius ;
    cout << "Enter the radius  :";
    cin >> radius;

    predict(radius);
    return 0;
}
// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.