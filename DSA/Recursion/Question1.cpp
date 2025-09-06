
#include <iostream>
using namespace std;

void nextnum(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    nextnum(n - 1);
}

void number(int n)
{
    if (n == 0)
        return;

    number(n - 1);
    cout << n << " ";
    // cout << n << " " ;
}

int main()
{
    int n = 5;
    number(n);
    nextnum(n - 1);
}

// Print an increasing-decreasing sequence using recursion

// Example: If n = 5, the output should be: 1 2 3 4 5 4 3 2 1