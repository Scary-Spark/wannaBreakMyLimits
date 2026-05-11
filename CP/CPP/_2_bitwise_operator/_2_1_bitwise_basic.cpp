#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // bitwise AND (&)
    /*
          5 = 1 0 1
          3 = 0 1 1
        -------------
          & = 0 0 1 = 1
    */
    cout << "5 & 3: " << (5 & 3) << "\n";

    // bitwise OR (&)
    /*
          5 = 1 0 1
          3 = 0 1 1
        -------------
          | = 1 1 1 = 7
    */
    cout << "5 | 3: " << (5 | 3) << "\n";

    // bitwise XOR (^): 1 when one of the bits is different
    /*
          5 = 1 0 1
          3 = 0 1 1
        -------------
          ^ = 1 1 0 = 6
    */
    cout << "5 ^ 3: " << (5 ^ 3) << "\n";

    // bitwise NOT (^): flips all the bits
    /*
        in 2's complement systme (most of the system use 2's compelement):
        ~ x = - (x+1)
    */
    cout << "~ 5: " << (~5) << "\n";

    // left shift (<<): shift the bits to left by n digits
    /*
        5 = 1 0 1
        5 << 1 = 1 0 1 0 = 10
        5 << 2 = 1 0 1 0 0 = 20

        N.B.: multiply by 2
        5 << 1 = 5 * 2 = 10
        5 << 2 = 5 * 2 * 2 = 20
    */
    cout << "5 << 2: " << (5 << 2) << "\n";

    // right shift (<<): shift the bits to right by n digits
    /*
        5      =     1 0 1
        5 << 1 =   0 0 1 0 = 2
        5 << 2 = 0 0 0 0 1 = 1

        N.B.: divide by 2
        5 << 1 = 5 / 2 = 2
        5 << 2 = (5 / 2)/2 = 1
    */
    cout << "5 >> 2: " << (5 >> 2) << "\n";
}