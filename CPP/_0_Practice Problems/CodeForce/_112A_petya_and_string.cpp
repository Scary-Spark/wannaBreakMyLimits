// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, ss;
    cin >> s >> ss;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);

    if (s < ss)
        cout << "-1\n";
    else if (s == ss)
        cout << "0\n";
    else
        cout << "1\n";
}