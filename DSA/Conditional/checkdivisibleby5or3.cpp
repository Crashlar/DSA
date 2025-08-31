#include <iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the number : ";
    cin >>  n ;
    if (n % 5 == 0 || n % 3 == 0  ){
        cout << "Yes , Divisble by 5 or 3";
    }
    else{
        cout << "None of both r";
    }
    return 0;
}