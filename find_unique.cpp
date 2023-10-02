#include <iostream>
#include <map>
using namespace std;

int findUnique(int arr[], int size)
{
    map<int, int> arrMap;
    for (int i = 0; i < size; i++)
    {
        if (arrMap.find(arr[i]) != arrMap.end())
            arrMap[arr[i]] += 1;
        else
            arrMap[arr[i]] = 1;
    }

    for (const auto &i : arrMap)
    {
        if (i.second == 1)
            return i.first;
    }
}

int findUniqueWay2(int arr[], int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
        unique = unique ^ arr[i];
    return unique;
}

int main()
{
    int arr[9] = {5, 64, 32, 42, 36, 5, 64, 32, 42};
    int size = sizeof(arr) / sizeof(int);
    cout << "The unique element is: " << findUnique(arr, size) << endl;
    cout << "The unique element is: " << findUniqueWay2(arr, size) << endl;
}