#include <iostream>
using namespace std;

void fun(int n ){
    if (n == 0 ) return ; 
    // if return is called then all the below line code is useless
    cout << "Hello J"<< endl ;  
    fun(n-1);
}

int main(){
    fun(3);
}

