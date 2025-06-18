#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
/*
 350. Intersection of Two Arrays II
Solved
Easy
Topics
premium lock icon
Companies
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
*/

vector<int> intersect(vector<int> &arr, vector<int> &arr1)
{
    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end());

    vector<int> soln;
    int n = arr.size();
    int n1 = arr1.size();

    int i = 0;
    int j = 0;

    while (i < n && j < n1)
    {
        if (arr[i] < arr1[j])
            i++;
        else if (arr[i] > arr1[j])
            j++;
        else if (arr[i] == arr1[j])
        {
            soln.push_back(arr[i++]);
            j++;
        }
    }

    return soln;
}

int main() {}
