#include <iostream>
using namespace std;

bool CheckSquare(int num, int n) {
    if (n == num) {
        return true;
    }
    if (n < num || n % num != 0) {
        return false;
    }
    return CheckSquare(num, n / num);
}

int main(){
    int n = 32; 

    cout << CheckSquare( 2 , n);
}
// Given a positive integer, return true if it is a power of 2 using recursion.