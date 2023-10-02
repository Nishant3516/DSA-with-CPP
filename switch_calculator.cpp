#include <iostream>
using namespace std;

int performOperation(int a, int b, char opr)
{
    switch (opr)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    case '%':
        return a % b;
        break;

    default:
        cout << "Enter a valid operation";
        return -1;
        break;
    }
}

int main()
{
    int num1, num2;
    char opr;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the operator (+, -, *, /, %): " << endl;
    cin >> opr;
    cout << performOperation(num1, num2, opr);
    return 0;
}