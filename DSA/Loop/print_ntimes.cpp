/*
#include <iostream>
using namespace std;

int main(){
    int count;
    cout << "Enter the terms : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Hello World!" << endl; 

    }
    

    return 0;
}   
*/


#include <iostream>
using namespace std;

int main(){
    int count;
    cout << "Enter the terms : ";
    cin >> count;

    int i = 0; // intialize like this for global 
    for (; i < count; )
    {
        cout << "Hello World!" << endl; 
        i++;
    }
    

    return 0;
}   