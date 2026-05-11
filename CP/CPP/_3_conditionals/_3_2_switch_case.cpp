#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 1;

    switch (x)
    {
    case 1:
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid day\n";
    }
}