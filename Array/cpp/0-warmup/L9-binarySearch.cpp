#include <iostream>
#include <vector>
using namespace std;
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

bool binarySearch(vector<int> arr, int item)
{
    int left = 0;
    int right = arr.size() - 1;
    int half = left + (right - left) / 2;
    while (left <= right)
    {
        if (arr[half] == item)
            return true;
        if (arr[half] < item)
        {
            left = half + 1;
        }
        else if (arr[half] > item)
        {
            right = half - 1;
        }
        half = left + (right - left) / 2;
    }

    return false;
}

int main()
{
    vector<int> arr;
    addElementInArray(arr);
    int item;
    cout << "Enter item to find: ";
    cin >> item;

    bool isPresent = binarySearch(arr, item);
    if (isPresent == false)
    {
        cout << "not present" << endl;
    }
    else
    {
        cout << "present" << endl;
    }
}