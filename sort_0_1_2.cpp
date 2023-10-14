#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortThreeValues(int arr[], int n)
{
    int low = 0;      // Pointer for 0s
    int high = n - 1; // Pointer for 2s
    int i = 0;        // Current element pointer

    while (i <= high)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[low]);
            i++;
            low++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[high]);
            high--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[13] = {0, 1, 2, 1, 2, 0, 1, 2, 0, 1, 0, 1, 0};
    printArray(arr, 13);
    sortThreeValues(arr, 13);
    printArray(arr, 13);

    return 0;
}
