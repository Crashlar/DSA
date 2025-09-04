#include <iostream>
#include<string>
using namespace std;

int main(){
    string s = "AZYZXBYDXJK";
    string str = ""; 
    for( int i = 0 ; i < s.size(); i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }
    cout << str;

    // bubble sort 

     for (int i = 0; i < str.size() - 1; i++)
    { // n-1 passes
        
        // traverse
        bool flag = true;
        for (int j = 0; j < str.size() - i - 1 ; j++) 
        {
            if (str[j] < str[j+1]){
                // swap
                swap(str[j], str[j+1]);
                flag = false;
            }
        }
        if ( flag  == true){ // swap didnt happen
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i]<< " ";
    }
}