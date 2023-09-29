#include <iostream>
using namespace std;

int main()
{
    int myNum = 10;                // Integer (whole number) - 2 or 4 bytes
    float myFloatNum = 5.85;       // Floating point number - 4 bytes
    double myDoubleNum = 25.45;    // Floating point number - 8 bytes
    char myLetter = 'N';           // Character - 1 byte
    bool myBoolean = true;         // Boolean - 1 byte
    string myText = "Hello World"; // String

    cout << "Size of Integer datatype is " << sizeof(myNum) << endl;
    cout << "Size of Float datatype is " << sizeof(myFloatNum) << endl;
    cout << "Size of Double datatype is " << sizeof(myDoubleNum) << endl;
    cout << "Size of Character datatype is " << sizeof(myLetter) << endl;
    cout << "Size of Boolean datatype is " << sizeof(myBoolean) << endl;

    return 0;
}
