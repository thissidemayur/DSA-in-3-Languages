#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
Move all zeros to end of array

Given an array of integers arr[], the task is to move all the zeros to the end of the array while maintaining the relative order of all non-zero elements.

Examples:

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: arr[] = [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

Input: arr[] = [10, 20, 30]
Output: arr[] = [10, 20, 30]
Explanation: No change in array as there are no 0s.

Input: arr[] = [0, 0]
Output: arr[] = [0, 0]
Explanation: No change in array as there are all 0s.

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

// worst approch
void moveZeroesToEndOfArray(vector<int> arr)
{
    cout << "Worst case approch: " << endl;
    vector<int> newArr;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            newArr.push_back(arr[i]);
            count++;
        }
    }
    cout << endl;

    for (int i = count; i < arr.size(); i++)
    {
        newArr.push_back(0);
    }

    printArray(newArr);
}

// using 2 pointer approch
void moveZeroesToEndOfArrayBy2Pointer(vector<int> arr)
{
    cout << "2 pointer approch: " << endl;

    if (arr.size() < 1)
    {
        cout << "empty array" << endl;
        return;
    }
    // 1 2 3 4 5 0 6 5
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            if (count != i)
            {
                swap(arr[i], arr[count]);
            }
            count++;
        }
    }

    printArray(arr);
}

//
void moveZeroesToEndOfArrayBySwapping(vector<int> arr)
{
    //
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }

    for (int i = count; i < arr.size(); i++)
    {
        arr[i] = 0;
    }
    printArray(arr);
}

//

void moveZeroesToEndOfArrayBySTL(vector<int> arr)
{
    stable_partition(arr.begin(), arr.end(), [](int n)
                     { return n != 0; });
    printArray(arr);
}

int main()
{

    vector<int> arr;
    addElementInArray(arr);
    moveZeroesToEndOfArray(arr);
    moveZeroesToEndOfArrayBy2Pointer(arr);
    cout << "hy" << endl;
    moveZeroesToEndOfArrayBySwapping(arr);
    moveZeroesToEndOfArrayBySTL(arr);

    return 0;
}