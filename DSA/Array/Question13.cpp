#include <iostream>
#include <vector>
using namespace std;

void checksorted(vector<int> v){
    bool flag = false;
    for (int i = 0; i <v.size(); i++)
    {
        if(v[i] > v[i+1])
        flag = true;
    }

    if (flag)
    cout << "This array is not sorted";
    else cout << "This array is sorted";
    
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
    
    checksorted(v);
    return 0;
}


// Check if the given array is sorted or not