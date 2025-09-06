#include <iostream>
using namespace std;

void Ntoone(int n ){
    // base function 
    if (n == 0 )
    return ; 

    cout << n << endl ;  
    Ntoone(n-1);
}

int main(){
    int n = 20 ; 
    Ntoone(n);
}

// #self