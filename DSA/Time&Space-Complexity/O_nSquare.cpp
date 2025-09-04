#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ENter n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "I only." << endl;
        }
    }
    // Complexity
    // O(n^2)
}