#include <iostream>
using namespace std;

int maxNum(int arr[], int length)
{
    int max = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int minNum(int arr[], int length)
{
    int min = INT_MAX;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int length;
    cout << "Enter the length of the array";
    cin >> length;

    // It is a bad practice
    // int arr[length];

    int arr[100];

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum number is " << maxNum(arr, length) << endl;
    cout << "The minimum number is " << minNum(arr, length) << endl;
}