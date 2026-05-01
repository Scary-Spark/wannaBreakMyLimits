// static cast

#include <iostream>
using namespace std;

int main()
{
    // same same as explicit type casting
    // just a modern version

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double d = 3.234343;
    int a = static_cast<int>(d);

    cout << static_cast<long long>(d) * a << endl;
}