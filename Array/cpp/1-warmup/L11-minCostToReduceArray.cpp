#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
Minimum cost to make array size 1 by removing larger of pairs
Last Updated : 20 Mar, 2025
Given an array of n integers. We need to reduce size of array to one. We are allowed to select a pair of integers and remove the larger one of these two. This decreases the array size by 1. Cost of this operation is equal to value of smallest one. Find out minimum sum of costs of operations needed to convert the array into a single element.

Examples:

Input: arr[]= [4 ,3 ,2 ]
Output: 4
Explanation: Choose (4, 2) so 4 is removed, new array = {2, 3}. Now choose (2, 3) so 3 is removed.  So total cost = 2 + 2 = 4.

Input: arr[]=[ 3, 4 ]
Output: 3
Explanation: choose (3, 4) so cost is 3
*/

// helper function
void addElementInArray(vector<int> &arr)
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "\nEnter input for dynamic array: " << endl;
    arr.resize(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << endl;
}

void minCostToReduceArray(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    cout << "min cost: " << arr[0] * arr.size() - 1;
}

int main()
{
    vector<int> arr;
    addElementInArray(arr);
    minCostToReduceArray(arr);
}