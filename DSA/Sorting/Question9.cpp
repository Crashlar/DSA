#include <iostream>
#include <vector>
using namespace std;

// Selection Sort function
void selectionSort(vector<int>& arr)
{
    int n = arr.size();
    for( int i = 0 ; i < n - 1 ; i++){
        int min = INT16_MAX;
        int mindx = -1;
        // minimum element calculation in orange box
        for(int j = i ; j < n ; j++){
            if (arr[j] < min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i] , arr[mindx]);
    }
}

// Function to find the minimum possible sum
int minPossibleSum(vector<int>& digits)
{
    selectionSort(digits);
    int num1 = 0, num2 = 0;
    
    // Forming two numbers alternately
    for (int i = 0; i < digits.size(); i++)
    {
        if (i % 2 == 0)
        num1 = num1 * 10 + digits[i];
        else
        num2 = num2 * 10 + digits[i];
    }
    
    return num1 + num2;
}

int main()
{
    vector<int> digits = {5, 3, 0, 7, 4}; 
    cout << "Minimum Possible Sum: " << minPossibleSum(digits) << endl;
    return 0;
}


// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of two numbers formed from digits of the array. Please note that all digits of the given array must be used to form the two numbers.