#include <iostream>
using namespace std;

int main(){
     int a = 1;
    int n ; 
    cout << "Enter the terms : ";
    cin >> n ;
    for (int i = 1 ; i <= n ; i++)
    {
        cout << a << endl;
        a *= 2;
    }
       
    return 0;
}

//  Program to print GP Series
