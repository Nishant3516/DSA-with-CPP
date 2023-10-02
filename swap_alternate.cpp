#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
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

    swapAlternate(arr, size);
    printArray(arr, size);
}