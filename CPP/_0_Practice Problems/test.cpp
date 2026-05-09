// https://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 25;
    vector<int> v;

    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int row = 0;
    int col = 0;
    for (int i : v)
    {
        if (i == 1)
            break;
        if (col == 4)
        {
            row++;
            col = 0;
        }
        col++;
    }

    cout << (abs(col - 2) + abs(row - 2)) << "\n";
}