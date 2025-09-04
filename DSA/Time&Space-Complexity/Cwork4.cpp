#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int c = 0;
    for (int i = 2; i <= n; i *= i)
    {
        c++;
    }
    // Time complexity
        // O(log(logn))
}