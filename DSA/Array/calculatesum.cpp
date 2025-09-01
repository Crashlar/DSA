#include <iostream>
using namespace std;

int main(){
    
    int size , arr[size] ;
    cout << "Enter the size of an array : ";
    cin >> size;
    cout << "Enetr the array : ";
    for (int i = 0; i < size ; i++)
    {
        cin >> arr[i];
    }
    int sum = 0 ; 
    for (int i = 0; i < size ; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of array : "<< sum << endl;
    
    return 0;
}