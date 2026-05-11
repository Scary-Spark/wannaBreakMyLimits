#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;

    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> v = {{2, 3}, {1, 5}, {2, 1}, {1, 2}};

    sort(v.begin(), v.end(), cmp);

    for (auto p : v)
        cout << p.first << " " << p.second << "\n";
}