#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            c++;
        }
        // Time complexity = O(n^2)
        // Outer loop: i goes from 0 to n - 1 (total of n iterations).
        // Inner loop: j goes from 0 to i - 1 — so it runs i times for each value of i.
        // This is quadratic time complexity, since the total number of operations grows proportional to n^2.
    }
}

// Question 
// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
//      for(int j = 0; j < i; j++){
//          c++;
//      }
// }