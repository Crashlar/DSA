#include <iostream>
using namespace std;

int main()
{
    int sub[50], i;
    for (i = 0; i <= 48; i++)
        ; // break the line so the code works and output is 49 
        // after 48 iter i values at next iter is 49 then exit from the loop   
    {
        sub[i] = i;
        cout << sub[i] << endl;
    }
    return 0;
}

// Question -
// int main()
// {
// int sub[50], i ;
// for ( i = 0 ; i <= 48 ; i++ ) ;
// {
// sub[i] = i ;
// cout<<sub[i]<<endl ;
// }
// return 0;
// }