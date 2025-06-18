#include <iostream>
using namespace std;
#include <vector>

/*

 Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

*/

vector<int> searchRangeNotBest(vector<int> &arr, int target)
{
    cout << "worst case->O(n) T.C" << endl;
    int start = 0;
    int end = arr.size() - 1;
    int s = 0;
    int s1 = 0;
    vector<int> result = {-1, -1};
    while (start <= end)
    {
        if (arr[start] == target && s == 0)
        {
            result[0] = start;
            s++;
        }
        if (s == 0)
            start++;

        if (arr[end] == target && s1 == 0)
        {
            result[1] = end;
            s1++;
        }
        if (s1 == 0)
            end--;
        if (s1 == 1 && s == 1)
            break;
    }
    return result;
}

vector<int> searchRangeBestApproch(vector<int> &arr, int target)
{
    cout << "worst case->O(logn) T.C" << endl;
    int start = findBound(arr, target, true);
    int end = findBound(arr, target, false);

    return {start, end};
}

int findBound(vector<int> &arr, int target, bool isFirst)
{
    int start = 0;
    int end = arr.size() - 1;
    int bound = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            bound = mid;
            if (isFirst)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return bound;
}

int main() {}
