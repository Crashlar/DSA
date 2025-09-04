#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main()
{
    // first Approach -> Brute Force
    int arr[8] = {6, 1, 2, 4, 3, 2, 7, 5};
    int flag = false;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
                cout << arr[i];
            flag = true;
            break;
        }
        if (flag)
            break;
    }
}
    // observation
        // 1. Time consuming
        // 2.Space Efficient

*/

/*
int main(){
    // method 2
    int arr[8] = {6, 1, 2, 4, 3, 2, 7, 5};
    vector<int > v(8 , 0);

    // observation
        // 1. Time Efficient
        // 2. space occupied more

}
*/

int main()
{

    vector<int> arr = {6, 1, 2, 4, 3, 2, 7, 5};
    int n = arr.size();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = n * ((  n + 1 )/2); 
    cout << sum << endl;
    cout << sum - s ; 

}
// Observation 
    // 1. Time efficient
    // 2. Space Efficient
