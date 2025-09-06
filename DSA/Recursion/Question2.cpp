#include <iostream>
using namespace std;

int OddSum(int a , int b ){
    if (a > b)
        return  0 ;
    return ((a%2==1)?a:0) + OddSum(a+1,b);
}

int main(){
    int a = 0 , b = 8 ; 
    cout << OddSum(a , b );
}


// Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion.