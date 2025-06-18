#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <climits>
using namespace std;
/*
----------------------------------- Largest three distinct elements in an array -----------------------------------
Last Updated : 05 Jun, 2025
Given an array arr[], the task is to find the top three largest distinct integers present in the array.

Note: If there are less than three distinct elements in the array, then return the available distinct numbers in descending order.

Examples :

Input: arr[] = [10, 4, 3, 50, 23, 90]
Output: [90, 50, 23]

Input: arr[] = [10, 9, 9]
Output: [10, 9]
There are only two distinct elements

Input: arr[] = [10, 10, 10]
Output: [10]
There is only one distinct element

Input: arr[] = []
Output: [] */

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

// we are using sort + set; TC->)(nlogn)
vector<int> largest3DistinctElementSTL(vector<int> arr)
{
    int largest = INT_MIN;
    int larger = INT_MIN;
    int large = INT_MIN;
    // modify set to store desending order rather than ascending
    set<int, greater<int>> s(arr.begin(), arr.end());
    int count = 0;
    vector<int> result;
    for (int element : s)
    {
        result.push_back(element);
        count++;
        if (count == 3)
            break;
    }

    return result;
}

// best approch
vector<int> largest3DistinctElement(vector<int> arr)
{
    int largest = INT_MIN;
    int larger = INT_MIN;
    int large = INT_MIN;

    for (int element : arr)
    {
        if (element == largest || element == larger || element == large)
        {
            continue;
        }

        if (largest < element)
        {
            large = larger;
            larger = largest;
            largest = element;
        }
        else if (larger < element)
        {
            large = larger;
            larger = element;
        }
        else if (large < element)
        {
            large = element;
        }
    }

    vector<int> result;
    if (largest == INT_MIN)
        return {};
    if (larger == INT_MIN)
    {
        result.push_back(largest);
        return result;
    }
    if (large == INT_MIN)
    {
        result.push_back(largest);
        result.push_back(larger);
        return result;
    }
    return result;
}
int main()
{

    vector<int> arr1;
    addElementInArray(arr1);
    vector<int> outputArr;
    cout << "using STL: " << endl;
    outputArr = largest3DistinctElementSTL(arr1);
    printArray(outputArr);

    cout << "best approch: " << endl;
    outputArr = largest3DistinctElement(arr1);
    printArray(outputArr);

    cout << " ------------------------------------- NOTE -------------------------------------" << endl;
    cout << "➤ By default, a C++ set stores elements in ascending order.------> SYNTAX: set < int> s" << endl;
    cout << " If you want descending order. ------> use: SYNTAX: set<int, greater<int>> s" << endl;

    return 0;
}
