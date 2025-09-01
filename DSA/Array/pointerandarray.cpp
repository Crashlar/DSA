#include <iostream>
using namespace std;

int main(){
    int arr[] = { 2, 4, 5,6, 7};
    int* ptr = arr;
    // cout << ptr << endl;
    // ptr[0] = 8 ; 

    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i]<< " ";
    }
    cout << endl; 
    *ptr = 8 ; 
    ptr++;
    *ptr = 9 ; 
    ptr--;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i]<< " ";
    }


    return 0;
}