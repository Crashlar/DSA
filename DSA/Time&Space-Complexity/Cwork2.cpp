#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int c = 0 ; 
    for( int i = 0 ; i < n ; i *= 2){// O(logn)
        for( int j = 0 ; j < i ; j++){ // O(n)
            c++;
        }    
    }
    // TIme complexity 
        // O(n*logn)

}