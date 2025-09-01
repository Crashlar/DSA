#include <iostream>
using namespace std;

int squares(int x ){
    for (int i = 1; i <= x; i++)
    {
        cout << i* i << " "; 
    }
    
}


int main(){
    int lastterm ;
    cout << "Enter the last term : ";
    cin >> lastterm;  
    squares(lastterm);
    return 0;
}

// Write a function to print squares of first n natural numbers, taking n as argument to the function.
