#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
----------------------------------------------- Array Reverse -----------------------------------------------

Given an array arr[], the task is to reverse the array. Reversing an array means rearranging the elements such that the first element becomes the last, the second element becomes second last and so on.

Examples:
Input: arr[] = {1, 4, 3, 2, 6, 5}
Output: {5, 6, 2, 3, 4, 1}
Explanation: The first element 1 moves to last position, the second element 4 moves to second-last and so on.

Input: arr[] = {4, 5, 1, 2}
Output: {2, 1, 5, 4}
Explanation: The first element 4 moves to last position, the second element 5 moves to second last and so on.
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

vector<int> reverseArray(vector<int> arr)

{
    if (arr.size() < 1)
        return {};
    vector<int> reverseArr;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        reverseArr.push_back(arr[i]);
    }
    return reverseArr;
}

void reverseArraySTL(vector<int> arr)
{
    if (arr.size() < 1)
        return;

    reverse(arr.begin(), arr.end());
    printArray(arr);
}

void reverseArrayOptUsing2Pointer(vector<int> &arr)
{
    if (arr.size() < 1)
        return;

    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr);
}

void reverseArrayOptBySwappingElem(vector<int> &arr)
{
    if (arr.size() < 1)
        return;

    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[arr.size() - 1 - i]);
    }
    printArray(arr);
}
int main()
{
    vector<int> arr;
    addElementInArray(arr);
    printArray(arr);

    cout << "reverse array (returning new vector): " << endl;
    vector<int> reverseArr1 = reverseArray(arr);
    printArray(reverseArr1);

    cout << "reverse using 2-pointer swap: " << endl;
    vector<int> arr2 = arr;
    reverseArrayOptUsing2Pointer(arr2);

    cout << "reverse using optimized swap logic: " << endl;
    vector<int> arr3 = arr;
    reverseArrayOptBySwappingElem(arr3);

    cout << "reverse using STL: " << endl;
    vector<int> arr4 = arr;
    reverseArraySTL(arr4);
}
