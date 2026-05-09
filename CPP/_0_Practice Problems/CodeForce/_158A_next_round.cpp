// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v;

    while (n--)
    {
        int s;
        cin >> s;
        v.push_back(s);
    }

    int count = 0;
    for (int i : v)
    {
        if (i >= v.at(k - 1) && i != 0)
            count++;
    }

    cout << count << "\n";
}