/*
  ----------------------------- SORT COLORS---   Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.



Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]

*/
#include <iostream>
using namespace std;
#include <vector>

void sortColors(vector<int> &arr)
{
  int start = 0;
  int zero = 0;
  int end = arr.size() - 1;

  while (start <= end)
  {
    if (arr[start] == 0)
    {
      swap(arr[start++], arr[zero++]);
    }
    else if (arr[start] == 1)
      start++;
    else if (arr[start] == 2)
      swap(arr[start], arr[end--]);
  }
}

int main()
{
}