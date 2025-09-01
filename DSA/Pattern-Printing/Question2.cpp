// colm countiong printing 
#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        for (int j = 1; j<= count - i + 1 ; j++)
        {
            cout << j << " ";
     

        }
        cout << endl;
        
    }
    
    
    return 0;
}


// Input: n = 4

// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1