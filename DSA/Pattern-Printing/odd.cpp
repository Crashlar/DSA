#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        int a = 1 ; 
        for (int j = 1; j<= i; j++)
        {
            cout << a ;
            a +=2; 

        }
        cout << endl;
        
    }
    
    
    return 0;
}