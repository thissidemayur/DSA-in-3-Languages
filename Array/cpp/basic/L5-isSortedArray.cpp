#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
---------------------------------- Check if an Array is Sorted ----------------------------------

Given an array of size n, the task is to check if it is sorted in ascending order or not. Equal values are allowed in an array and two consecutive equal values are considered sorted.

Examples:

Input: arr[] = [20, 21, 45, 89, 89, 90]
Output: Yes

Input: arr[] = [20, 20, 45, 89, 89, 90]
Output: Yes

Input: arr[] = [20, 20, 78, 98, 99, 97]
Output: No
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

//
bool isSorted(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        int min = arr[i];
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (min > arr[j])
                return false;
        }
    }
    return true;
}

bool isSortedOpt(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

bool isSortedSTL(vector<int> arr)
{
    return is_sorted(arr.begin(), arr.end());
}

int main()
{
    // not optimised use O(n*n)->TC
    vector<int> arr;
    addElementInArray(arr);
    bool isSort = isSorted(arr);
    cout << "is soreted array: " << isSort << endl;

    // optimised way: use 0(n)->TC
    vector<int> arr1;
    addElementInArray(arr1);
    bool isSort1 = isSortedOpt(arr1);
    cout << "is soreted array (optimised approch): " << isSort1 << endl;

    // using STL template:
    vector<int> arr2;
    addElementInArray(arr2);
    bool isSort2 = isSortedSTL(arr2);
    cout << "is soreted array (STL approch): " << isSort2 << endl;
}