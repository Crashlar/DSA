#include <iostream>
using namespace std;

int main(){
    int count = 5;
    for (int i = 1; i <= count  ; i++ )
    {
        char ch = 'A';
        for (int j = 1; j<= i; j++)
        {
            if(i % 2 != 0 )
            cout << j << " ";
            else cout << ch << " ";
            ch++;

        }
        cout << endl;
        
    }
    
    
    return 0;
}


// Input: n = 4

// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5