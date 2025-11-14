#include <iostream>
#include<stack>
using namespace std;

void printStack(stack<int> st){

    while(!st.empty()){
        cout<< st.top()<< " ";
        st.pop();
    }
}

int main(){
    
    stack<int> st;

    for(int i = 0 ; i <= 10 ; i++){
        st.push(i);
    }

    printStack(st);



}