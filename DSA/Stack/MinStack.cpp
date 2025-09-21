#include <iostream>
#include <stack>
#include<climits>
using namespace std;

class MinStack{
    stack<int> st;
    MinStack(){
        
    }
    
    void push(int val ){
        // 0(1)
        st.push(val);
    }
    
    void pop(){
        // 0(1)
        st.pop();
    }
    
    int top(){
        // 0(1)
        return st.top();
    }

    int getMin(){
        stack<int> helper;
        int mn = INT_MAX;
        while(!st.empty()){
            mn = min(mn , st.top());
            helper.push(st.top());
            st.pop();
        }

        while(!helper.empty()){
            mn = min(mn , st.top());
            st.push(helper.top());
            helper.pop();
        }

        return mn ; 

    }

    int getMin1(){
        // by using extra stack that will always have the same no. of elements as your given st
        
    }
};


// 1 approch 
// Brute Force 
// T.C = 0(n) , S.C = 0(n)

// 2 approach 


// 3 approah 


int main(){
    
}