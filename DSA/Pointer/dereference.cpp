#include <iostream>
using namespace std;

int main(){
    int x = 122 ; 
    int* p = &x; 
     x = 90 ; 
     *p = 8 ;
    cout << *p<< endl;
    return 0;
}

// tp ke andar jo adress rakhi hai us address pe jao , and vahan ki value print kar do 