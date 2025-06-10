#include <iostream>
using namespace std;
#include <vector>
// for fixed size array at runtime
int linearSearch(int *arr, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return 1;
    }
    return 0;
}

// for dynmaic array
int linearSearch1(vector<int> arr, int element)
{
    for (int i : arr)
    {
        if (arr[i] == element)
            return 1;
    }
    return 0;
}

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

// take input for array
void takeInputForArray1(vector<int> &arr)
{
    int size;
    cout << "Enter size of fixed array: ";
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

//
int main()
{
    int size;
    cout << "Enter size of fixed array: ";
    cin >> size;
    int *arr1 = new int[size];

    takeInputForArray(arr1, size);
    int searchElement1;
    cout << "Enter element which you have to search in array: ";
    cin >> searchElement1;

    int getElement = linearSearch(arr1, size, searchElement1);
    if (getElement == 0)
    {
        cout << "Element not present" << endl
             << endl;
    }
    else
    {
        cout << "element is present" << endl
             << endl;
    }

    // for dynamic array

    vector<int> arr;
    takeInputForArray1(arr);
    int searchElement2;
    cout << "Enter element which you have to search in array: ";
    cin >> searchElement2;

    int getElement1 = linearSearch1(arr, searchElement1);
    if (getElement1 == 0)
    {
        cout << "Element not present" << endl
             << endl;
    }
    else
    {
        cout << "element is present" << endl
             << endl;
    }
}