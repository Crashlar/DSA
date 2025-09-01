
#include <iostream>
#include <vector>
using namespace std;

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
    

    int counter = 0 , num ;
    cout << "Enter the number that count the else greater : ";
    cin >> num ;  

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > num)
        counter++;
       
    }
    cout <<"Count of all greater number : "<< counter ; 
    
    return 0;
}


// Count the number of elements strictly greater than x.