#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enteer the n : ";
    cin >> n ; 
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        a[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        b[i]++;
    }

    // Obsevation of Complexity
    // O(n) + O(m) = O(n + m )
}