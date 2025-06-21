#include <iostream>
using namespace std;
// #include <climits>
#include <string> // strlen
#include <cctype> //tolowercase
                  /*
                  
                  1456. Maximum Number of Vowels in a Substring of Given Length
                  Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
                  
                  Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
                  
                  
                  
                  Example 1:
                  
                  Input: s = "abciiidef", k = 3
                  Output: 3
                  Explanation: The substring "iii" contains 3 vowel letters.
                  Example 2:
                  
                  Input: s = "aeiou", k = 2
                  Output: 2
                  Explanation: Any substring of length 2 contains 2 vowels.
                  Example 3:
                  
                  Input: s = "leetcode", k = 3
                  Output: 2
                  Explanation: "lee", "eet" and "ode" contain 2 vowels.
                  */

bool isVowel(char c)
{
    char ch = tolower(c);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int maxVowels(string s, int k)
{
    if (s.size() < k)
        return -1;

    int start = 0;
    int end = 0;
    int sum = 0;
    int maxSum = 0;

    while (end < s.size())
    {
        // condtion
        if (isVowel(s[end]) == true)
            sum += 1;

        if (end - start + 1 < k)
            end++;
        else if (end - start + 1 == k)
        {
            maxSum = max(sum, maxSum);
            if (isVowel(s[start]) == true)
            {
                sum -= 1;
            }
            start++;
            end++;
        }
    }
    return maxSum;
}

int main() {}
