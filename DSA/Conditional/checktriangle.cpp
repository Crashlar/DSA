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
    
    if ((side1 + side2 > side3) && (side1 < side2 + side3) && (side1 + side3 > side2)){
        cout << "Triange formed";
    }
    else{
        cout << "Not a Triagle ";
    }
    return 0;
} 