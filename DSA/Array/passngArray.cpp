#include <iostream>
using namespace std;

void display(int a[]){
    cout << "Entered in display functon.";
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    

}

void change(int b[]){
    cout << endl << "Entered in change func.";
    b[0] = 100; 
    // pass by reference is only allowed
    cout << endl;
}

int main(){
    int arr[] = { 1, 2, 3,  5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the element of array in another functon 
    // updation , pass by value / reference 
    display(arr);
    change(arr);
    display(arr);
    return 0;
}