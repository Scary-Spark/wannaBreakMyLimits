#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row = 3, column = 5;
    vector<vector<int>> v(row, vector<int>(column));

    vector<vector<int>> v2 = {
        {1, 2, 3},
        {2, 3, 4},
        {4, 5, 6}};

    // add a entire row
    vector<int> newRow = {22, 411, 412};
    v2.push_back(newRow);

    // add value to a row
    v[1].push_back(23);

    // number of rows
    cout << v2.size() << "\n";

    // number of columns in a speciifc now
    cout << v2[1].size() << "\n";

    // traversal
    for (auto &row : v2)
    {
        for (auto &x : row)
        {
            cout << x << " ";
        }

        cout << "\n";
    }
}