#include <vector>
using namespace std;
#include <iostream>
#include <limits.h>
#include <unordered_map>
/*3. Longest Substring Without Repeating Characters
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given a string s, find the length of the longest substring without duplicate characters.



Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring. */

int lengthOfLongestSubstring(string arr)
{
    if (arr.size() == 0)
        return 0;
    if (arr.size() == 1)
        return 1;
    int end = 0;
    int start = 0;
    int maxlen = INT_MIN;
    // character with index
    unordered_map<char, int> map;

    for (int end = 0; end < arr.size(); end++)
    {
        char ch = arr[end];

        if (map.count(ch) && map[ch] >= start)
            start = map[ch] + 1;
        map[ch] = end;
        maxlen = max(maxlen, end - start + 1);
    }

    return maxlen;
}
int main() {}
