#include <iostream>
#include <vector>
using namespace std;

/*
Given an array arr[], the task is to print every alternate element of the array starting from the first element.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: 10 30 50
Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).

Input: arr[] = [-5, 1, 4, 2, 12]
Output: -5 4 12
*/

// dyncamic Array (vector)
vector<int> printAlternativeElement1(vector<int> &arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i += 2)
    {
        result.push_back(arr[i]);
    }

    return result;
}

// static array:
void printAlternativeElement(int *arr, int size)
{
    int *result = new int[size];
    int j = 0;
    for (int i = 0; i < size; i += 2)
    {
        result[j++] = arr[i];
    }

    for (int i = 0; i < size - size / 2; i++)
    {
        cout << result[i] << " ";
    }
}

// take input in array
void takeInputForArray(int *&arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    // using dyncamic array
    vector<int> arr1 = {10, 20, 30, 40, 50, 60, 70, 80};
    vector<int> result1 = printAlternativeElement1(arr1);
    cout << "Ans using Dynanmic size array: ";
    for (int i : result1)
        cout << i << " ";
    cout << endl
         << endl
         << endl;

    // ans using fixed sized array

    int *arr2 = new int[size];

    takeInputForArray(arr2, size);
    printAlternativeElement(arr2, size);
    cout << endl;
}
