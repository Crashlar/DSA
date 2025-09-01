#include <iostream>
using namespace std;

int main(){
    int a = 0 , b = 1 , next = 0 ;
    int n = 10;
    cout << a << b << " " ;
    for (int  i = 1; i <= n ; i++)
    {
        next = a + b ; 
        a = b ; 
        b = next ; 
        cout <<next << " ";
    }
    return 0;
}

// fibo(n) = fibo(n-1) + fibo( n - 2 )