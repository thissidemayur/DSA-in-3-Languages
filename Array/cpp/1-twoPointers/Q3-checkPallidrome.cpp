#include <iostream>
using namespace std;

#include <string> // strlen
#include <cctype> //toupper , tolower , isalnum ,isspace,islower

/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/
bool isspecialchar(char a)
{
    return !(isalnum(a) || isspace(a));
}
bool isPalindrome(string arr)
{
    string newStr = "";
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (!isspecialchar(arr[i]) && !isspace(arr[i]))
        {
            char s = arr[i];
            if (isupper(arr[i]))
                s = tolower(s);
            newStr += s;
        }
    }
    // check is plaidrome or not
    int start = 0;
    int end = newStr.size() - 1;
    int count = 0;
    while (start <= end)
    {
        if (newStr[start] != newStr[end])
        {
            return false;
        }
        start++;
        end--;
        count++;
    }
    return true;
}

int main()
{
}