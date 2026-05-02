#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 10;
    int *p = &x;

    // address of x (value at p)
    cout << p << "\n";

    // value of x using p (Dereferencing)
    cout << *p << "\n";

    cout << x << endl;  // 5
    cout << &x << endl; // address
    cout << p << endl;  // same address
    cout << *p << endl; // 5
}