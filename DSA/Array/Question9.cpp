#include <iostream>
#include <vector>
using namespace std;
void palindrome(vector<int> v){
    int size = v.size();
    bool flag = false;
    for (int i = 0; i < size /2; i++)
    {
        if (v[i] != v[size - i - 1])
        flag = true;
        break;
    }
    if(flag) cout << "Not Palindrome";
    else cout << "Palindrome";
    
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
     palindrome(v);   
    return 0;
}



// If an array arr contains n elements, then check if the given array is a palindrome or not .