#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
--------------------------- Rotate an Array - Clockwise or Right ---------------------------

Rotations in the array is defined as the process of rearranging the elements in an array by shifting each element to a new position. This is mostly done by rotating the elements of the array clockwise or counterclockwise.

Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {5, 6, 1, 2, 3, 4}
Explanation: After first right rotation, arr[] becomes {6, 1, 2, 3, 4, 5} and after the second rotation, arr[] becomes {5, 6, 1, 2, 3, 4}

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

void RotateArrayUsingTemporaryArray(vector<int> arr, int k)
{
    int n = arr.size();
    k %= n;
    int start = 0;
    vector<int> result(n);
    for (int i = n - k; i < n; i++)
    {
        result[start++] = arr[i];
    }

    for (int i = 0; i < n - k; i++)
    {
        result[start++] = arr[i];
    }

    printArray(result);
    cout << "Tc->O(n) and SC->O(n)" << endl;
    cout << " -------------------------- ** --------------------------" << endl;
}

void RotateArray1by1(vector<int> arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < k; i++)
    {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    printArray(arr);

    cout << "Tc->O(n*k) and SC->O(1)" << endl;
    cout << " -------------------------- ** --------------------------" << endl;
}

void RotateArrayUsingReversreAlgo(vector<int> arr, int k)
{
    int n = arr.size();
    k %= n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    printArray(arr);
    cout << "Tc->O(n) and SC->O(1)" << endl;
    cout << " -------------------------- ** --------------------------" << endl;
}

// ---------------------- main function ----------------------
int main()
{

    vector<int> arr;
    addElementInArray(arr);

    int k;
    cout << "Enter num to rotate clockwise(right side): ";
    cin >> k;

    RotateArrayUsingTemporaryArray(arr, k);
    RotateArray1by1(arr, k);
    RotateArrayUsingReversreAlgo(arr, k);
}
