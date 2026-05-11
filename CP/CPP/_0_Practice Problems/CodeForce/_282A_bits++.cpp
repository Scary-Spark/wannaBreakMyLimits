// https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        if (s.at(0) == '+' || s.at(2) == '+')
            ans++;
        else
            ans--;
    }

    cout << ans << "\n";
}