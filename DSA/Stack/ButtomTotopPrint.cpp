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
    
    
        while (temp.size() > 0 )
        {
            st.push(temp.top());
            temp.pop();
        }
    
}

void buttomToTop(stack<int> st){

    stack<int>temp;

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    cout << endl ; 
    print(temp);

}

int main()
{
    stack<int> st;

    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);

    print(st);

    buttomToTop(st);


}