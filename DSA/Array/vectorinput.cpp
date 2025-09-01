#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5);
    vector<int> q;
    
    // for (size_t i = 0; i < v.size(); i++)
    // {
    //     // works only when the vecotr size is already intialized
    //     cin >> v[i]; 
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i]<< " ";
    // }
    
    // for not intialize size
    
    for (int i = 0; i < 5; i++)
    {
        int x; 
        cin >> x;
        q.push_back(x);
    }
    
    for (int i = 0; i < q.size(); i++)
    {
        cout << q[i]<< " ";
    }
    
    return 0;
}