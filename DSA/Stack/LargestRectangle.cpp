#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int LargestRectangle(vector<int> &arr)
{
    int n = arr.size();
    int nsi[n];
    stack<int> st;
    nsi[n - 1] = n;

    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if (st.empty())
            nsi[i] = n;
        else
            nsi[i] = st.top();
        st.push(i);
    }

    int psi[n];
    stack<int> gt;
    psi[0] = -1;

    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if (st.empty())
            psi[i] = -1;
        else
            psi[i] = st.top();
        st.push(i);
    }

    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        int height = arr[i];
        int breadth = nsi[i] - psi[i] - 1;
        int area = height * breadth;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{

    vector<int> arr;
    arr = {2, 1, 5, 6, 2, 3};

    cout << LargestRectangle(arr);
}