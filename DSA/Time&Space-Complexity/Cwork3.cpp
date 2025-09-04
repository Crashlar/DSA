#include <iostream>
using namespace std;

int main(){
     int n;
    cout << "Enter n : ";
    cin >> n;

    int c = 0 ; 

    for( int i = 1 ; i * i <= n ; i *=2 ){ // O(n)
        for( int j = 0 ; j < i ; j++){ // O(n)
            c++;
        }
    }
    // time complexity 
        // O(n^2)   
}