#include <iostream>
using namespace std;

int main(){
    int product = 1 ; 
    int n ; 
    cout << "Enter the number : ";
    cin >> n ; 
    for (int i = 1; i <= n ; i++)
    {
        product *= i ;
         
    }
    cout << "Factorial is : "<< product<< endl;
    
    // n! = n * ( n - 1 )
    return 0;
}