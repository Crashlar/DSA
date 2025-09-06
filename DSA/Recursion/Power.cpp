#include <iostream>
using namespace std;

int pow( int x , int n ){
    if ( n == 1 ) return x ; 
    int ans = pow(x , n /2);
    if (n % 2 == 0 )
        return ans * ans ; 
    if (n % 2 != 0 )
        return ans * ans * x ; 

}

int power(int x , int n ){
    if (n == 1 ) return x ; 
    // if ( n == 0 ) return 1 ; 
    return x * power(x , n -1);
} 
int main(){
    cout << pow(3 , 4 );
}
