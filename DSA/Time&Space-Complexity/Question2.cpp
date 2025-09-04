#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int c = 0;
    for (int i = n; i > 1; i /= i)
    {
        c++;
        // Time complexity = O(1)
        // Since the loop runs at most once, the time complexity is:
    }
}

// Question
// Calculate the time complexity for the following code snippet.
// int c = 0;
// for(int i = n; i > 1; i /= i) {
//      c++;
// }