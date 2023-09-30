// Printing fibonacci series with and without recursion

#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    // without recursion
    int n, a = 0, b = 1, next, count = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series Without Recursion" << endl;
    cout << a << " " << b << " ";
    while (count < n - 2)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
        count++;
    }

    // With recursion
    cout << endl
         << "Fibonacci Series With Recursion" << endl;
    for (int i = 0; i < n; i++)
        std::cout << fibo(i) << " ";
    return 0;
}