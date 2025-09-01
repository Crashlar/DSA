/*
#include <iostream>
using namespace std;

int main(){
    int count; 
    cout << "Enter the terms : ";
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cout << i<< " ";
        for (int j = 1; j <= i; j++)
          {
            cout << "*";
        }
        cout << "\n";
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
    for (int i = 1; i <= count; i++)
    {
        cout << i<< " ";
        for (int j = i; j <= count; j++)
          {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
