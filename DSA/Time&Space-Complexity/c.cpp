#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n ; 
    int k = 2 ; 
    int c = 0 ; 
    for( int i = 1 ; i <= n ; i *= k ){
        c++;
    }
}