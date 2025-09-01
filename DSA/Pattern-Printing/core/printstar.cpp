#include <iostream>
using namespace std;

int main(){
    int count; 
    cout << "Enter the terms : ";
    cin >> count;
    
    int count1; 
    cout << "Enter the terms : ";
    cin >> count1;

    for (int i = 1; i <=count; i++)
    {
        for (int j = 1; j <= count1; j++)
        {
            cout << " * ";
        }
        cout << "\n";
        
    }
    
    return 0;
}