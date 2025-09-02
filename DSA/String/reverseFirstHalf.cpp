#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    // string str ;
    // getline(cin , str);
    // int n = str.length();
    // reverse(str.begin(), str.begin()+ n / 2);
    // cout << str << endl ;
     
    string str = "Mukesh";
    reverse(str.begin()+1 , str.begin()+5);
    cout << str<< endl;
}