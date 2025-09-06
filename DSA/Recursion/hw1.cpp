// Print goodmoring of n times , where 'n' is user input

#include <iostream>
using namespace std;

void message(int n ){
    if (n == 0 ) return ; 
    cout << "Good Morning times : "<< n << " "<< endl ;
    message(n - 1 );
}
int main(){
    int n ; 
    cout << "Enter the last term : ";
    cin >> n ; 
    message(n);
}