#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int k = 10 ; 
    int c = 0;
    for (int i = 0; i < n; i += k)
    {
        c++;
        // Time complexity = O(n)
            // Even though the step size is k, the loop still scales linearly with n when k is a constant.
    }
}

// Question 
// Calculate the time complexity for the following code snippet where k is some constant (k<<n).
// int c = 0;
// for(int i = 0; i < n; i += k) {
//      c++;
// }

