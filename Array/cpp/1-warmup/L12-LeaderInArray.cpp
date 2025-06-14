#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
Leaders in an array
Given an array arr[] of size n, the task is to find all the Leaders in the array. An element is a Leader if it is greater than or equal to all the elements to its right side.

Note: The rightmost element is always a leader.

Examples:

Input: arr[] = [16, 17, 4, 3, 5, 2]
Output: [17 5 2]
Explanation: 17 is greater than all the elements to its right i.e., [4, 3, 5, 2], therefore 17 is a leader. 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.

Input: arr[] = [1, 2, 3, 4, 5, 2]
Output: [5 2]
Explanation: 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.
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

void LeaderInArray(vector<int> arr)
{
    cout << "worst approch: " << endl;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int largest = arr[i];
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                largest = arr[j];
                break;
            }
        }
        if (largest == arr[i])
        {
            result.push_back(largest);
        }
    }
    printArray(result);
}

void LeaderInArrayBestApproch(vector<int> arr)
{
    cout << "best approch: " << endl;
    vector<int> result;
    int n = arr.size();
    int maxRight = arr[n - 1];
    result.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > maxRight)
        {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    reverse(result.begin(), result.end());
    printArray(result);
}

int main()
{
    vector<int> arr;
    addElementInArray(arr);
    LeaderInArray(arr);
    LeaderInArrayBestApproch(arr);

    return 0;
}
