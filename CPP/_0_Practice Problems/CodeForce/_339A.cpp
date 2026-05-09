// https://codeforces.com/problemset/problem/339/A

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

    string result;
    for (char c : s)
    {
        if (c != '+')
            result.push_back(c);
    }

    sort(result.begin(), result.end());

    for (int i = 0; i < result.length(); i++)
    {
        cout << result[i];
        if (i != result.length() - 1)
            cout << "+";
    }

    cout << "\n";
}