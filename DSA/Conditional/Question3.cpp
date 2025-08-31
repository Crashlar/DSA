#include <iostream>
using namespace std;

int main(){
    int year ; 
    cout << "Enter the year of 4 digit : ";
    cin >> year;

    if ( year % 4 == 0 ){
        cout << "Leap year";
    }
    else{
        cout << "Not a leap year ";
    }
    return 0;
}
// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)