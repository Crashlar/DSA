#include <iostream>
#include <stack>
using namespace std;

void nextGreaterFix(int arr[], int n)
{
    // next greater element array
    int nge[n];
    for (int i = 0; i < n; i++)
    {
        nge[i] = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nge[i] = arr[j];
                break;
            }
        }
    }
    cout << "By Brute Force : "<< endl; 
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl;
}



// visiting stack best case
// pop ans push
int visitingStack(int arr[], int n)
{
    stack<int> st;
    int nge[n];
    nge[n - 1] = -1;
    st.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
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

    nextGreaterFix(arr, n);
    visitingStack(arr, n);
}

