#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
Second Largest Element in an Array

Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.

Note: If the second largest element does not exist, return -1.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 there is no second largest element.
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

// stl approch
int secondLargestElementSTL(vector<int> arr)
{
    if (arr.size() < 2)
        return -1;
    sort(arr.begin(), arr.end());
    int n = arr.size() - 2;
    for (int i = n; i >= 0; i--)
    {
        if (arr[i] != arr[n + 1])
            return arr[i];
    }
    return -1;
}

// best approch
int secondLargestElement(vector<int> arr)
{
    if (arr.size() < 2)
        return -1;

    int largestItem = arr[0];
    int secondLargestItem = -1;
    for (int num : arr)
    {
        if (largestItem < num)
        {
            secondLargestItem = largestItem;
            largestItem = num;
        }
        else if (largestItem != num && num > secondLargestItem)
        {
            secondLargestItem = num;
        }
    }
    return secondLargestItem;
}
int main()
{
    vector<int> arr1;
    addElementInArray(arr1);

    // using stl approch
    int seconfLargestItem = secondLargestElementSTL(arr1);
    cout << "2nd largest element( using STL ): " << seconfLargestItem << endl;

    // using
    int seconfLargestItem1 = secondLargestElement(arr1);
    cout << "2nd largest element( best approch ): " << seconfLargestItem1 << endl;
}