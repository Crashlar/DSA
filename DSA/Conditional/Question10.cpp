#include <iostream>
using namespace std;
// b is garbage value 
int main() { 
    int a = 500, b, c ; 
    if ( a <= 400 ) 
        b = 300 ; 
        c = 200 ;  // this is the in other line of if condition so c = 200
    cout << "value of b and c are respectively " << b << " and " << c; 
    return 0;

}

// Predict the output 
/*
int main() { 
    int a = 500, b, c ; 
    if ( a <= 400 ) 
        b = 300 ; 
        c = 200 ; 
    cout << "value of b and c are respectively “ <<b<<” and ” << c ; 
    return 0;
    }
    */