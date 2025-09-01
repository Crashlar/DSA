#include <iostream>
using namespace std;

void PrintOdd(int f ,int  l){
    if (f %2 == 0 ) f++ ; 
    for( int i = f ; i <= l ; i+=2){
        cout << i << " ";

    }
}

int main(){
    int firstterm , lastterm ; 
    cout << "Enter the first term : ";
    cin >> firstterm;
    cout << "Enter the last term : ";
    cin >> lastterm; 

    PrintOdd(firstterm, lastterm);
    return 0;
}

// Given two numbers a and b, write a function to print all odd numbers between them.