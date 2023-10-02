#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // The array must be sorted
    int arr[8] = {5, 64, 32, 42, 23, 21, 2, 54};
    int size = sizeof(arr) / sizeof(int);

    cout << "The original array is: " << endl;
    printArray(arr, size);
    cout << "The reversed array is: " << endl;

    reverseArray(arr, size);
    printArray(arr, size);
}