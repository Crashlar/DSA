#include <iostream>
#include <queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for ( int i = 1 ; i <= n ; i++){
        int x = q.front();
        cout << x<<" ";
        q.pop();
        q.push(x);
    }
    cout << endl ; 
}

void reverseDisplay(queue<int> q) {
    stack<int> st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        q.push(st.top());
        st.pop();
        
    }
    cout << endl;
}


int main(){
    queue<int> q; 

    // pop , push , front -> top , size/ empty , back 

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);


    
    display(q);

    reverseDisplay(q);
}