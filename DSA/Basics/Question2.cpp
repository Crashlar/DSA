#include <iostream>
using namespace std;

int main(){
    int x ;
    bool exit = false;
    for (int i = 0; i < 6 && !exit ; i++)
    {
        for (int j = 5; j >= 0 ; j--)
        {

            x = i + j ;
            if (x == 10 ) {
                cout << x;
                exit = true;
                break;
            }
        }
        
    }
    
    return 0;
}

// Print 10 using 2 positive numbers less than 6 in C++ as output.