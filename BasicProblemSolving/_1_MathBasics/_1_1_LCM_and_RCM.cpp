#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    /*
        GCD: Greatest Common Divisor
            num1 = 60 = 2 * 2 * 3 * 5
            num2 = 24 = 2 * 2 * 2 * 2 * 3

        GCD = multiplication of the commons
            = 2 * 2 * 3
            = 12

        n1      n2      remainder
        60  %   24   =    12
        24  %   12   =    0
        12  %   0

        when n2 becomes 0, GCD = n1
    */

    int num1 = 60, num2 = 24;
    int n1 = num1, n2 = num2, rem = -1;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    cout << "GCD: " << n1 << "\n";

    /*
        LCM: Least Common Divisor
            num1 = 60 = 2 * 2 * 3 * 5
            num2 = 24 = 2 * 2 * 2 * 2 * 3

        LCM = multiplciation of all the common and uncommon
            = 2 * 2 * 3 * 5 * 2
            = 120

        LCM = (num1 * num2 / GCD)
            = 60 * 24 / 12
            = 120
    */

    int lcm = num1 * num2 / n1;
    cout << "LCM: " << lcm << "\n";
}