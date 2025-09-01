#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        for (int j = 1; j<= i; j++)
        {
            cout << j << " ";
     

        }
        cout << endl;
        
    }
    
    
    return 0;
}



// Sample Input : n= 4

// Output :
// 1
// 1 2
// 1 2 3
// 1 2 3 4