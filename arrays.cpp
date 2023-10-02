#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // Getting the size of the array
    cout << "The size of array is " << sizeof(arr) << endl;

    // Getting the length of the array
    cout << "The length of array is " << sizeof(arr) / sizeof(int) << endl;

    // printing each element of the array
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    // Accessing elements through index
    cout << "The first element of the array is " << arr[0] << endl;

    int arr1[5] = {6, 7};
    cout << "The size of array is " << sizeof(arr1) << endl;

    // The rest of the elements is given a garbage value (0)
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Modifying a value using its index
    arr1[2] = 8;
    for (int i : arr1)
    {
        cout << i << " ";
    }
}