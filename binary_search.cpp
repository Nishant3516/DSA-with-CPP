#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // The array must be sorted
    int arr[8] = {2, 5, 21, 23, 32, 42, 54, 62};
    int key;
    cout << "Enter the element to search: " << endl;
    cin >> key;
    int result = binarySearch(arr, sizeof(arr) / sizeof(int), key);
    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at position " << result << endl;
}