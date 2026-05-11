// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    if (x % 2 == 0 && x != 2)
    {
        cout << "YES\n";
        return 0;
    }

    cout << "NO\n";
}