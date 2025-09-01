#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        char ch = 'A';
        for (int j = 1; j<= i; j++)
        {
            cout << ch << " ";
            ch++;

        }
        cout << endl;
        
    }
    
    
    return 0;
}


// Input: n = 4

// Output:
// A
// A B
// A B C
// A B C D