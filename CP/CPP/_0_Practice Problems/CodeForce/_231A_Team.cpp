// https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int totalCount = 0;
    while (n--)
    {
        int count = 0;
        int i = 3;
        while (i--)
        {
            int t;
            cin >> t;
            if (t == 1)
                count++;
        }
        if (count >= 2)
            totalCount++;
    }

    cout << totalCount << "\n";
}