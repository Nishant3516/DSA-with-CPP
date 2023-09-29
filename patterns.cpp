#include <iostream>
using namespace std;

int main()
{

    // PATTERN PRINTING
    /*
    Pattern 1 -
    * * * *
    * * * *
    * * * *
    * * * *
    */

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*
    Pattern 2 -
    1 1 1
    2 2 2
    3 3 3
    */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    Pattern 3 -
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */

    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /*
    Pattern 4 -
    *
    * *
    * * *
    * * * *
    */

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*
    Pattern 5 -
    1
    2 2
    3 3 3
    4 4 4 4
    */

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    Pattern 6 -
    1
    2 3
    4 5 6
    7 8 9 10
    */

    int a = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    /*
    Pattern 7 -
    1
    2 1
    3 2 1
    4 3 2 1
    */

    for (int i = 1; i <= 4; i++)
    {
        int n = i;
        for (int j = 0; j < i; j++)
        {
            cout << n << " ";
            n--;
        }
        cout << endl;
    }

    /*
    Pattern 8 -
    A A A
    B B B
    C C C
    */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << char(64 + i) << " ";
        }
        cout << endl;
    }

    /*
    Pattern 9 -
    A B C
    A B C
    A B C
    */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << char(65 + j) << " ";
        }
        cout << endl;
    }

    /*
    Pattern 10 -
    A B C
    D E F
    G H I
    */
    int a = 65;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << char(a) << " ";
            a++;
        }
        cout << endl;
    }

    /*
    Pattern 11 -
    1 2 3
    2 3 4
    3 4 5
    */
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i + j - 1 << " ";
        }
        cout << endl;
    }

    /*
    Pattern 12 -
          *
        * *
      * * *
    * * * *
    */

    for (int i = 1; i <= 4; i++)
    {
        for (int j = (4 - i); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*
    Pattern 13 -
    * * * *
    * * *
    * *
    *
    */

    for (int i = 0; i < 4; i++)
    {
        for (int j = (4 - i); j > 0; j--)
        {
            cout << "* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }

    /*
    Pattern 14 -
    1 1 1 1
      2 2 2
        3 3
          4
    */

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = (4 - i); j >= 0; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    Pattern 15 -
          1
        2 2
      3 3 3
    4 4 4 4
    */

    for (int i = 1; i <= 4; i++)
    {
        for (int j = (4 - i); j >= 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /*
    Pattern 16 -
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
    */

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4 - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /*
   Pattern 17 -
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
   */
    for (int i = 1; i < 6; i++)
    {
        int a = 1;
        for (int j = 5 - i + 1; j > 0; j--)
        {
            cout << a << " ";
            a++;
        }
        for (int k = 1; k < i; k++)
        {
            cout << "* ";
        }
        for (int l = 1; l < i; l++)
        {
            cout << "* ";
        }
        for (int m = 5 - i + 1; m > 0; m--)
        {
            a--;
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}