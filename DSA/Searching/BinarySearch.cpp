#include <iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& v , int target){
    // calculating length of array 
    int n = v.size();
    int low = 0 ; 
    int high = n -1 ; 
    
    while (low <= high){
        int mid = low + ( high - low ) / 2; 
        if ( v[mid] == target) return mid ; 
        else if (v[mid] > target) high = mid - 1 ;
        else low = mid + 1 ;  
    }
    return -1 ; 
    // TIme complexity  = O(logn)
}

int main(){
    vector<int> arr = { 1 , 2 , 4 , 5 , 9 , 15 , 18 , 21 };
    int target = 15 ; 

    cout << BinarySearch(arr  , target);  
     
}