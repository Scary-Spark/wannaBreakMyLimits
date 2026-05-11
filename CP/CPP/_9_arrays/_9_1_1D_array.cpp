#include <iostream>
using namespace std;

void print(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }

    cout << arr[i] << ", ";
    print(arr, n, ++i);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 2, 3, 4};
    cout << sizeof(arr) << endl;
    print(arr, sizeof(arr) / sizeof(arr[0]), 0);
}