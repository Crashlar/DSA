#include <iostream>
using namespace std;

int main(){
    int a = 4 , d = 3;
    int n ; 
    cout << "Enter the terms : ";
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        int ap = a + (i-1) * d;
        cout << ap << endl;
    }
    
    return 0;
}