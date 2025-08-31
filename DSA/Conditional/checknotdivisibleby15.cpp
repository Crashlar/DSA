#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            cout << "Not Divisible by 15 ";
        }
    }
    else if (n % 5 == 0 || n % 3 == 0)
    {
        cout << "Divisible by 5 and 3 ";
    }
    else
    {
        cout << "No";
    }
    return 0;
}


