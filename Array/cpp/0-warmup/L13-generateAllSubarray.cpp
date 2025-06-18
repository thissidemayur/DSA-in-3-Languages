#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
 Generating All Subarrays
Last Updated : 07 Feb, 2025
Given an array arr[], the task is to generate all the possible subarrays of the given array.

Examples:

Input: arr[] = [1, 2, 3]
Output: [ [1], [1, 2], [2], [1, 2, 3], [2, 3], [3] ]

Input: arr[] = [1, 2]
Output: [ [1], [1, 2], [2] ]
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
void printArray(vector<int> arr)
{
    cout << "printing array ...." << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

void generatingAllSubarray(vector<int> arr)
{
    vector<vector<int>> subarray;
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> sub;
        for (int j = i; j < arr.size(); j++)
        {
            sub.push_back(arr[j]);
            subarray.push_back(sub);
        }
    }

    // Print the subarrays
    for (const auto &sub : subarray)
    {
        std::cout << "[ ";
        for (int num : sub)
            std::cout << num << " ";
        std::cout << "]\n";
    }
}
int main()
{
    vector<int> arr;
    addElementInArray(arr);
    generatingAllSubarray(arr);

    return 0;
}
