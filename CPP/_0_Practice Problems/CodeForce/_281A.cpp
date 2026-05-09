// https://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (char &c : s)
    {
        c = toupper(c);
        break;
    }

    cout << s << "\n";
}