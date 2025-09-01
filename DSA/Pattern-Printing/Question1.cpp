// row printing 
#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        for (int j = 1; j<= count; j++)
        {
            cout << i << " ";
     

        }
        cout << endl;
        
    }
    
    
    return 0;
}


// print this 
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4