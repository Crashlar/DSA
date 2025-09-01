#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void MoveBegin(vector<int> &v){
    int n = v.size();
    int i = 0 , j = n - 1; 

    while ( i < j ){
        if ( v[i] < 0) i++;
        else if (v[j] > 0 ) j--;
        
        // if ( i > j ) break; 
        // if (v[i] <0 && v[j] > 0  ){
        else{   
        swap (v[i] , v[j]);
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v = {1  , -2 , 3 ,  -4 , -5 , 6 , 8};


    MoveBegin(v);
    for(int x : v){
        cout << x << " ";
    }
    return 0;
}
