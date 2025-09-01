#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        for (int j = i; j>= 1; j--)
        {
            cout << j << " ";
     

        }
        cout << endl;
        
    }
    
    
    return 0;
}


// Input: n = 4

// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1