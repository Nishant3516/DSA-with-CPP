#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i + 1;
    }
    return -1;
}

int main()
{
    int arr[8] = {5, 64, 32, 42, 23, 21, 2, 54};
    int key;
    cout << "Enter the element to search: " << endl;
    cin >> key;
    int result = linearSearch(arr, sizeof(arr), key);
    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at position " << result << endl;
}