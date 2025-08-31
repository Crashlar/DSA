#include <iostream>
using namespace std;

void increment(){
    int a=4;
    int b=5;
    a++;
    b--;
    cout<<"a : "<< ++a<<" " << "b :" << b--;
}

int main(){
    cout << "Running Func : \n";
    increment();
    return 0;
}


// What is the output of the function 
/*
        void increment(){
            int a=4;
            int b=5;
            a++;
            b--;
            cout<<"a : "<< ++a<<" " << "b :" << b--;
        }
            
*/