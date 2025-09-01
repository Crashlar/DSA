#include <iostream>
using namespace std;

int product(int* ptr1, int* ptr2) {
    return (*ptr1) * (*ptr2);
}


int main(){
    int a= 4 , b = 5 ; 
    int* ptr = &a;
    int* ptr2 = &b ; 
    cout << product(ptr , ptr2);

    return 0;
}
// Write a program to find the product of two numbers using pointers