#include <iostream>
using namespace std;

void print(int arr[][3], int n, int m, int i, int j)
{
    if (i == n)
        return; // base case (finished all rows)

    cout << arr[i][j] << " ";

    if (j + 1 < m)
        print(arr, n, m, i, j + 1); // move right
    else
    {
        cout << "\n";
        print(arr, n, m, i + 1, 0); // move to next row
    }
}

int main()
{
    int arr[][3] = {
        {2, 3, 0},
        {3, 4, 0},
        {5, 6, 0}};

    int n = sizeof(arr) / sizeof(arr[0]);       // rows
    int m = sizeof(arr[0]) / sizeof(arr[0][0]); // cols

    print(arr, n, m, 0, 0);
}