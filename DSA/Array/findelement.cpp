#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 7};
    int search ;
    bool flag = false;
    cout << "Enter the element you want to search : ";
    cin >> search;
    for (int i = 0; i < 8; i++)
    {
        if (search == arr[i])
        {
            flag = true;
            
        }
    }
    if (flag)
        cout << search << " is present " << endl;
    else
        cout << "Element not found ";
    
    return 0;
}