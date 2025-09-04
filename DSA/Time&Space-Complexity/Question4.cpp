#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int c = 0;
    for (int i = 1; i < n; i *= 2)
    {
        c++;
        // Time complexity =  O(logn)
            //  A logarithmic time complexity, just like binary search or divide-and-conquer steps.

    }
}

// Question
// Calculate the time complexity for the following code snippet. 
// int c = 0;
// for(int i = 1; i < n; i *= 2) {
//      c++;
// }