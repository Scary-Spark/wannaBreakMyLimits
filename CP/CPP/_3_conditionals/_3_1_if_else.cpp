#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 0;

    if (x > 0)
        cout << "Positive";

    else if (x < 0)
        cout << "Negative";

    else
        cout << "Zero";
}