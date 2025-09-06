#include <iostream>
using namespace std;

int reverse(int sum , int n ){
      
    if ( n == 0 ) return sum ; 
    return reverse(n%10 + sum *10 , n/10);
}

int main(){
    int num = 123456789;

    cout << reverse(0 , num);

}
// Write a program to calculate the reverse of a given positive integer using recursion.