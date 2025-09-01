#include <iostream>
#include <vector>
using namespace std;

void calculatediffer(vector<int> arr){
    int evensum = 0 , oddsum = 0 ; 

    for (int i = 0; i <arr.size(); i++)
    {
        if(i % 2 == 0 ) evensum += arr[i];
        else oddsum += arr[i];
    }

    cout << "Even indices of sum : "<< evensum<<endl; 
    cout << "Odd indices of sum : "<< oddsum<<endl; 
    cout << "Difference of even and odd indices values : "<< abs(evensum - oddsum);
    
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
    calculatediffer(v);
    return 0;
}

// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.