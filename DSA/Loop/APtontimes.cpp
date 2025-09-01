/*
#include <iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the terms : ";
    cin >> n ;
    for (int i = 1; i <= 2*n-1 ; i += 2)
    {
        cout << i << endl;
    }
    
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    int a = 1  ;
    int n = 12 ;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;;
        a += 2 ;
    }
    
    return 0;
}