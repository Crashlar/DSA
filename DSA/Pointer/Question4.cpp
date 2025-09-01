// address a is now 20 
#include <iostream>
using namespace std;

int main(){
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout << *ptr << endl;
    cout << *ptr2<< endl;
    return 0;
}

// Question- 
//     int a = 15, b = 20;
//     int *ptr = &a;
//     int *ptr2 = &b;
//     *ptr = *ptr2;
    // option-
    // ptr now points to b
    // ptr2 now points to a
    // a gets value of b
    // b gets value of a