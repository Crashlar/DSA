#include<iostream>
#include<stack>
using namespace std;


int visitingStack(int arr[], int n)
{
    stack<int> st;
    int nge[n];
    nge[0] = -1;
    st.push(arr[n - 1]);

    for (int i = 0; i < n ; i++)
    {
        // pop all the elements smaller than arr[i]

        while (!st.empty() && st.top() <= arr[i])
            st.pop();

        // mark the ans in nge array

        nge[i] = st.empty() ? -1 : st.top();
        // push the arr[i]
        st.push(arr[i]);
    }
    cout << "By visiting stack :"<< endl ; 
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);


    // original 
    cout << "Original Array : "<< endl ; 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    visitingStack(arr, n);
}

