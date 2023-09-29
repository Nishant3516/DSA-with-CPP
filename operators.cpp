#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;

    // Arithmetic Operators
    cout << "Addition" << a + b;
    cout << "Subtraction" << a - b;
    cout << "Multiplication" << a * b;
    cout << "Division" << a / b;
    cout << "Modulus" << a % b;
    cout << "Increment" << ++a;
    cout << "Decrement" << --a;

    // Assignment Operators
    int c = 7;
    c += 3;
    c -= 3;
    c *= 3;
    c /= 3;
    c %= 3;
    c &= 3;
    c |= 3;
    c ^= 3;
    c >>= 3;
    c <<= 3;

    // Comparison or Relational Operators
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;

    // Logical Operators
    bool x = a < 5 && b < 10;
    bool y = a < 5 || b < 10;
    bool z = !(a < 5);
    cout << x;
    cout << y;
    cout << z;

    // Bitwise Operators
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "b << 1 = "
         << (b << 1) << endl;
    cout << "b >> 1 = "
         << (b >> 1) << endl;
}