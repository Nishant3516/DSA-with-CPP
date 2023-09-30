// sum from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "The sum of numbers form 1 to " << n << " is " << sum;

    return 0;
}
