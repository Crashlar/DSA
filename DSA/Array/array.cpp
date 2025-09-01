#include <iostream>
using namespace std;

int main(){
    int arr[8];
    cout << "Entre the array : ";
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];

    }
    cout << "Printing array : ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i]<< endl;

    }
    
    return 0;
}