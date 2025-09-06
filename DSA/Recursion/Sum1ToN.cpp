#include <iostream>
using namespace std;

void sum(int i , int n)
{
    if (n == 0){
        cout << i << endl ; 
        return;
    }
    sum(i + n , n -1 );

}

int returntype(int n ){
    int sum = 0 ; 

    if (n == 0 ) return 0 ; 


    return n + returntype(n -1);
}

int main()
{
    int n = 10;
    // sum(0  , n);

    cout << returntype(n);
}