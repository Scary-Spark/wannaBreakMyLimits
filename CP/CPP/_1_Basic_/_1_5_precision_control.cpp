// data types

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double d = 2.41232323232;
    cout << "D is: " << d << '\n';
    cout << ", reduced: " << fixed << setprecision(2) << d << '\n';
    cout.unsetf(ios::fixed);

    double e = 1.3412343434343;
    cout << e;
}