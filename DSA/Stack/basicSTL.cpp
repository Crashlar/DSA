#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    // // stack size 0
    // cout << st.size() << endl;
    st.push(10);
    
    // size = 1
    st.push(3);
    
    // size = 2
    st.push(30);
    
    // size = 3
    st.push(40);
    
    // // size = 4
    // cout << st.size() << endl;
    // st.pop();
    
    // // size = 3
    
    // top
    // cout << st.top() << endl;
    
    // printing full stack values
    // while (st.size() > 0)
    // {
        //     cout << st.top() << " ";
        //     st.pop();
    // }
    
    // after print the size
    // cout << st.size() << endl;
    
    
    stack<int> temp;

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

    cout << endl << st.top();
    
}