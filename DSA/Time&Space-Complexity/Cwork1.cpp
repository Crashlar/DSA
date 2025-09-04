#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int c = 0;
    for (int i = 1; i <= n; i += i){ // O(logn)
        for( int j = n ; j >= 0 ; j--){ // O(n)
            c++;
        }
    }
    // Time complexity 
        // O(n*logn)
}