// data types

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;       // size: 4 bytes, range: -2^31 to (2^31 - 1), used for: number <= 10^9
    long long b; // 8 bytes, -2^63 to (2^63 - 1), values can go beyond 2*10^9

    double d = 2.41232323232;
    string s = "Some words";

    char c = 'A';
}