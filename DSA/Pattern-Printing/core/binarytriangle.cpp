/*
#include <iostream>
using namespace std;

int main(){
    int count ;
    cout << "Enter the count term : ";
    cin >> count ;  
    int num = 5 ; 
    for (int i = 1; i <= count; i++)
    {
        if(i%2 !=0 ) num = 1 ;
        else num = 0 ; 
        for (int j= 1; j <= i; j++)
        {
            cout << num ; 
            // flipping 
            if (num == 0 ) num = 1;
            else num = 0 ;
        }
        
        cout << endl;
    }
    return 0;
}

*/

#include <iostream>
using namespace std;

int main(){
    int count ;
    cout << "Enter the count term : ";
    cin >> count ;  
    int num = 5 ; 
    for (int i = 1; i <= count; i++)
    {
        for (int j= 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0 ) cout << 1<< " ";
            else cout << 0 << " ";
            
        }
        
        cout << endl;
    }
    return 0;
}



