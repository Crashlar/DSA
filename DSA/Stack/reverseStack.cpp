

#include <iostream>
#include <stack>
using namespace std;

void print(stack<int>st){
    stack<int>temp;
    while (st.size() > 0)
        {
            cout << st.top() << " ";
            temp.push(st.top());
            st.pop();
        }
    
        // putting element back from tem to st
    
        while (temp.size() > 0 )
        {
            st.push(temp.top());
            temp.pop();
        }
    
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    
    print(st);

    stack<int>gt;
    stack<int> repeat;
    // empty st into gt 
    
    
    while (st.size() > 0 ){
        gt.push(st.top());
        st.pop();
    }
    
    
    while (gt.size() > 0 ){
        repeat.push(gt.top());
        gt.pop();
    }
    
    while (repeat.size() > 0 ){
        st.push(repeat.top());
        repeat.pop();
    }
    
    cout << endl ; 
    print(st);
}