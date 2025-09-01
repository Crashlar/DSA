#include <iostream>
#include <vector>
using namespace std;

void FindUnique(vector<int>v){
    int unique = 0;

    for (int num : v) {
        unique ^= num;
    }

    cout <<"Unique number in array : "<< unique << endl;

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
    FindUnique(v);
    return 0;
}

// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

