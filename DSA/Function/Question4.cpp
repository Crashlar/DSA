#include<iostream>
using namespace std;

void square(int n){
    int count = 0;
    int flag = false;
    if ( n == 0 ) {
        flag = true;
    }
    while (n){
        count++;
        n=n/10;
    }
    if (flag) cout << 1 << " ";
    else
    cout << count*count << endl;
}

int main(){
    int num ;
    
    cout << "Enter num  :";
    cin >> num;

    square(num);

    return 0;
}

// Write a function to count the number of digits in a number and then print the square of this number.