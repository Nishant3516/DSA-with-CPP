#include <iostream>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // Doing XOR of all the elements
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}