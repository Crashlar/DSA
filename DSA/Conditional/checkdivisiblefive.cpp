#include <iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the number : ";
    cin >>  n ;
    if (n % 5 == 0 ){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}