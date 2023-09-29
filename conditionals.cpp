#include <iostream>
using namespace std;

int main()
{

    int a = 5;

    // If statement
    if (a > 0)
    {
        cout << "The number is greater than 0";
    }

    // If else statement
    if (a % 2 == 0)
    {
        cout << a << " is an even number";
    }
    else
    {
        cout << a << " is an even number";
    }

    // If - else if - else statement
    if (a > 0)
    {
        cout << "The number is positive";
    }
    else if (a < 0)
    {
        cout << "The number is negative";
    }
    else
    {
        cout << "The number is zero";
    }

    // Ternary Operator
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    // Switch statement
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Waiting for a weekend";
    }

    return 0;
}