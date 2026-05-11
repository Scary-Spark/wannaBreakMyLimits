// https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (s.length() > 10)
            s = s.at(0) + to_string(s.length() - 2) + s.back();
        cout << s << "\n";
    }
}