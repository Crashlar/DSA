#include <iostream>
using namespace std;

void CheckGreater(int a , int b ){
    if ( a > b ){
        cout << "num1 is greater";
    }
    else
    {
        cout << "Num2 is greater";
    }
    return ;
}

int main(){
    int num1 , num2 ; 
    cout<< "Enter the num1 : ";
    cin >> num1;
    cout << "Enter the num2 : ";
    cin >> num2;

    CheckGreater(num1 , num2);
    return 0;
}

// Take 2 integers input and print the greatest of them.