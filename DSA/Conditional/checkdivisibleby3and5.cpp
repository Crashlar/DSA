#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    // if (n % 5 == 0 && n % 3 == 0) 
    // or
    if (n % 15 == 0)
    {
        cout << "Yes, divisible by 5 and 3 ";
    }
    else
    {
        cout << "No";
    }
    return 0;
}