#include <iostream>
#include <stack>
using namespace std;

void print(stack<int>& st)
{
    stack<int> temp;
    while (st.size())
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }

    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}

void CallRecursive(stack<int> &st)
{
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    CallRecursive(st);
    cout << x << " ";
    st.push(x);
}

// reverse the stack
void CallRecursiveReverse(stack<int> &st)
{
    if (st.empty())
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    CallRecursiveReverse(st);
    st.push(x);
}

void PushAtBottomRecusive(stack<int>& st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    PushAtBottomRecusive(st, val);
    st.push(x);
}

void reverse(stack<int>& st){
    if(st.size() == 1 )return ; 
    int x = st.top();
    st.pop();
    reverse(st);
    PushAtBottomRecusive(st , x );
}

int main()
{
    stack<int> st;

    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);

    CallRecursive(st);
    cout << endl;
    CallRecursiveReverse(st);
    // CallRecursive(st);
    PushAtBottomRecusive(st, -10);
    cout << endl ;
    print(st);

    cout << endl;
}