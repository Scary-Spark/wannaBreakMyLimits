#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[3] = {1, 2, 3};
    int *p = arr;

    /*
        Note:
            arr is already a pointer, which pointing to first element
            so,
                arr -> address of arr[0],
                *(arr + 1) -> arr[1]
                *(arr + 2) -> arr[2]
    */

    cout << *(p + 1) << endl;
}