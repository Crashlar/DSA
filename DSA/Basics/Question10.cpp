#include <iostream>
using namespace std;

int main(){
    float x ;
    cout << "Enter the num : ";
    cin >> x ;
    int y = (int)x;
    if (y < 0 ) y = y -1 ;
    float z = (float)y;
    x = x - y ;

    cout << x ;
    return 0;
}