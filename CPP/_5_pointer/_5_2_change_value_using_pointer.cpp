#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int *p = &x;

    *p = 20;
    cout << "new value of x: " << x << "\n";
}