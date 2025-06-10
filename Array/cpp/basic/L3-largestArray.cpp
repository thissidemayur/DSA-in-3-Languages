#include <iostream>
using namespace std;

/*
Given an array arr. The task is to find the largest element in the given array.

Examples:

Input: arr[] = [10, 20, 4]
Output: 20
Explanation: Among 10, 20 and 4, 20 is the largest.

Input: arr[] = [20, 10, 20, 4, 100]
Output: 100
*/

int largestElement(int *arr, int size)
{
    int largest = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            largest = arr[i + 1];
        }
    }
    return largest;
}

//
// take input for array
void takeInputForArray(int *&arr, int size)
{
    cout << "Enter input for fixed array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << endl;
}

int main()
{
    int size;
    cout << "enter array size: ";
    cin >> size;
    int *arr = new int[size];
    takeInputForArray(arr, size);
    int largestNumInArray = largestElement(arr, size);
    cout << "Largest Element: " << largestNumInArray << endl;
}
