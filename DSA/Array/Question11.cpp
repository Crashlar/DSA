#include <iostream>
#include <vector>
using namespace std;

void changearray(vector<int>&arr){
    for (int i = 0; i <arr.size(); i++)
    {
        // even index
        if (i % 2 == 0)  
            arr[i] = arr[i] + 10;

        else  arr[i] = arr[i] * 2;  
    }
    
}

int main(){
    vector<int> v;
    int term ; 
    cout << "How many number want to add :";
    cin >> term; 
    for (int i = 0; i < term; i++)
    {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    cout << "Before change fiunction : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" "; 
        
    }
    // callin the function 
    changearray(v);
    // after change function
    cout <<endl << "After changed : "; 
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" "; 
        
    }
    
    return 0;
}

// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

