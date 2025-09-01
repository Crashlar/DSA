#include <iostream>
using namespace std;

int main(){
    int count = 5;
    for (int i = 1; i <=count; i++)
    {
        int mid = (count/ 2) + 1;
        for (int j = 1; j <= count; j++)
        {
            if (i== mid || j== mid)
            cout << " * ";
            else     
            cout << "   ";
            
        }
        cout << endl;
        
    }
    
    return 0;
}