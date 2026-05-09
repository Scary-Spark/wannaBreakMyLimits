#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // for (int i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not prime" << "\n";
    //         return 0;
    //     }
    // }

    // reduce the loop more by using sqrt root
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << "\n";
            return 0;
        }
    }

    cout << "Prime\n";
}