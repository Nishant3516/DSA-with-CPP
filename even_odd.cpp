#include <iostream>
using namespace std;

int checkEvenOdd(int num)
{
    // Odd number
    if (num & 1)
        return 0;
    // Even Number
    else
        return 1;
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    if (checkEvenOdd)
        cout << "The number is odd";
    else
        cout << "The number is even";

    return 0;
}