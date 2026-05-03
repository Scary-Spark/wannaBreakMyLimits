#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << fixed << setprecision(3);

    cout << pow(2, 3) << "\n";
    cout << sqrt(45) << "\n";
    cout << abs(-10) << "\n";
    cout << max(2, 3) << "\n";
    cout << min(4, 2) << "\n";
    cout << floor(3.6) << "\n";
    cout << ceil(3.2) << "\n";
    cout << round(3.5) << "\n";
    cout << log(10) << "\n";
    cout << log10(100) << "\n";
    cout << sin(53) << "\n"; // in radian
    cout << cos(53) << "\n"; // in radian
    cout << tan(53) << "\n"; // in radian
    cout << exp(2) << "\n";

    int a = 4, b = 2;
    swap(a, b);
    cout << a << ", " << b << "\n";

    cout.unsetf(ios::fixed);
}