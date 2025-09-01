#include <iostream>
using namespace std;

int main()
{
    int count; 
    cout << "Enter the terms : ";
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        // print row number
        cout << i<<" ";
        for (int j = 1; j <= count; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}


