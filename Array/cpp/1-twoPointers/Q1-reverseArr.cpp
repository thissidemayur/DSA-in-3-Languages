#include <iostream>
using namespace std;
#include <vector>
void reverseArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
}
                                            }
