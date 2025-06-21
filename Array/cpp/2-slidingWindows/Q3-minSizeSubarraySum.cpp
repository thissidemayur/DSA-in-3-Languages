#include <vector>
using namespace std;
#include <iostream>
#include <limits.h>

/*
 09. Minimum Size Subarray Sum
Solved
Medium
Topics
premium lock icon
Companies
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.



Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0

 */

int minSubArrayLen(int target, vector<int> &arr)
{
    int start = 0;
    int end = 0;
    int sum = 0;
    int minSize = INT_MAX;

    while (end < arr.size())
    {
        sum += arr[end];

        while (sum >= target)
        {
            minSize = min(minSize, end - start + 1);
            sum -= arr[start++];
        }
        end++;
    }
    if (minSize == INT_MAX)
        return 0;

    return minSize;
}

int main() {}
