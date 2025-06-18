#include <iostream>
#include <vector>
using namespace std;

/*
---------------------------------  Remove duplicates from Sorted Array  ---------------------------------

Given a sorted array arr[] of size n, the goal is to rearrange the array so that all distinct elements appear at the beginning in sorted order. Additionally, return the length of this distinct sorted subarray.

Note: The elements after the distinct ones can be in any order and hold any value, as they don't affect the result.

Examples:

Input: arr[] = [2, 2, 2, 2, 2]
Output: [2]
Explanation: All the elements are 2, So only keep one instance of 2.

Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]

Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation : No change as all elements are distinct.
*/

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

// not a best approch
int removeDuplicateFromSortedArray(vector<int> &arr)
{
    if (arr.size() < 1)
    {
        return 0;
    }

    int duplicateElement = arr[0];
    vector<int> newArr;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            newArr.push_back(arr[i]);
        }
    }
    cout << endl;
    newArr.push_back(arr[arr.size() - 1]);
    printArray(newArr);
    int len = newArr.size();
    return len;
}

// optimised approch
int removeDuplicateFromSortedArrayOpt(vector<int> &arr)
{
    if (arr.size() < 1)
    {
        return 0;
    }
    int index = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[index] = arr[i];
            index++;
        }
    }
    cout << endl;
    arr.resize(index);

    printArray(arr);
    return index;
}

int main()
{
    // non optimised approch (o(n) ->tc and sc)
    vector<int> arr1;
    addElementInArray(arr1);
    int nonDuplicateArray1 = removeDuplicateFromSortedArray(arr1);
    cout << "non duplicate array size: " << nonDuplicateArray1 << endl;

    // optimised approch (O(n)->TC and O(1)->SC)
    vector<int> arr2;
    addElementInArray(arr2);
    int nonDuplicateArray2 = removeDuplicateFromSortedArrayOpt(arr2);
    cout << "non duplicate array size: " << nonDuplicateArray2 << endl;
}