#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 1; i <=  count; i++)
    {
        for (int j  = 1 ; j <= count-i ; j++)
        {
            cout << " " ; 
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        
        cout << endl;
        
    }
    
    return 0;
}