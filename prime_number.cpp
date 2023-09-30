// Checking whether the number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    isPrime ? cout << n << " is a prime number" : cout << n << " is not a prime number";

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}