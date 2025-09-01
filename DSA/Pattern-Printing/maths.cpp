#include <iostream>
using namespace std;

int main(){
    int count = 4;
    
    for (int i = 1; i <= count; i++)
    {
        for( int j = 1 ; j <= count; j++){
            if((i+j) >= count+1 )   cout << "*";
            else cout <<" ";
        }
        cout  << endl;
    }
    
    
    return 0;
}