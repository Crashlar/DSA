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
        c += i;
        // TIme complexity = O(n)
            // Because the loop runs linearly with respect to n, and the addition c += i is a constant-time operation.
    }
}

// Question 
// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = 0; i < n; i++) {
//     c+=i;
// }