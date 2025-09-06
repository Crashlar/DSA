#include <iostream>
using namespace std;

int count(int n){
    if (n<0) return 0;
    if (n==0) return 1;
    int ways = 0;
    ways += count(n - 1);
    ways += count(n - 2);
    ways += count(n - 3);
    return ways;
}

int main(){
    int n;

    cout << "Enter the value of n = " << endl;
    cin >> n;

    cout << count(n);
    return 0;
}
// There are n stairs, and a person standing at the bottom wants to climb the stairs to reach the nth stair. The person can climb either 1, 2, or 3 stairs at a time. Write a program to count the number of ways the person can reach the top using recursion.