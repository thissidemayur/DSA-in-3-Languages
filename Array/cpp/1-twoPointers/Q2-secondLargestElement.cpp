#include <iostream>
using namespace std;
#include <vector>

int getSecondLargest(vector<int> &arr)
{
    // code here
    int large = -1;
    int second = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > large)
        {
            second = large;
            large = arr[i];
        }
        else if (arr[i] != large && arr[i] > second)
        {
            second = arr[i];
            //   cout<<second <<" ";
        }
    }
    return second;
}

int main()
{
}
