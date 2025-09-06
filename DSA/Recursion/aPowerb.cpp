#include <iostream>
using namespace std;

int power(int a , int b ){
    // base case 
    if ( b == 0 ) return 1 ;
    // return case 
    return a * (power(a , b-1));

}

int main(){
    int a = 4 ;
    int b = 3 ;
    cout << power(a , b);
}