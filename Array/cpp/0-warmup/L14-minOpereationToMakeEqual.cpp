#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
Minimum increment by k operations to make all equal

You are given an array of n-elements, you have to find the number of operations needed to make all elements of array equal. Where a single operation can increment an element by k. If it is not possible to make all elements equal print -1.

Example :
Input : arr[] = {4, 7, 19, 16},  k = 3
Output : 10

Input : arr[] = {4, 4, 4, 4}, k = 3
Output : 0

Input : arr[] = {4, 2, 6, 8}, k = 3
Output : -1
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

int minOpereationToMakeEqual(vector<int> arr, int k)
{
    int maxElement = *max_element(arr.begin(), arr.end());
    int opereation = 0;
    for (int num : arr)
    {
        int diff = maxElement - num;
        if (diff % k != 0)
            return -1;
        opereation += diff / k;
    }
    return opereation;
}

int main()
{
    vector<int> arr;
    addElementInArray(arr);
    int k;
    cout << "enter K:";
    cin >> k;
    int total = minOpereationToMakeEqual(arr, k);
    cout << "Opereations: " << total << endl;
}
