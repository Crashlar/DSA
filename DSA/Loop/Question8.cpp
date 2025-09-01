#include <iostream>
using namespace std;

int main(){
    int first = 1 , second = 1 , next = 0 ; 
    int sample = 10 ; 
    cout << "Fibonnaci Series of sample input "<< sample << " :-" << endl;
    cout << first  <<" "<<  second ;
    // started i = 3 because firstly 2 iter already printed
    for (int  i = 3; i <= sample; i++)
    {
        next = first + second ; 
        first = second ; 
        second = next; 
        cout << " "<< next; 
    }
    
    return 0;
}

// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :
// 1 1 2 3 5 8 13 21 34 55