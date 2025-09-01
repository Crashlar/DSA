/*
#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <= count  ; i++ )
    {
        for (int j = 1; j<= i; j++)
        {
            cout << "*"<< " ";
        }
        
        cout << endl;    
    }
        
    for (int i = count - 1; i >= 1 ; i-- )
    {
        for (int j = i; j>= 1; j--)
        {
            cout << "*"<< " ";
        }
        
        cout << endl;    
    }

    
    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int count = 4;
    int totalRows = 2 * count - 1;

    for (int i = 1; i <= totalRows; i++) {
        int stars = (i <= count) ? i : (totalRows - i + 1);

        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}


// Input n = 4

// Output:
// *
// **
// ***
// ****
// ***
// **
// *