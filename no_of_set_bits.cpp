#include <iostream>
using namespace std;

int countSetBit(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num & 1)
            count++;
        num = num >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    cout << "Total number of set bits in " << a << " and " << b << " is " << countSetBit(a) + countSetBit(b) << endl;
    return 0;
}