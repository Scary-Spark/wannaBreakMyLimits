#include <iostream>
using namespace std;

void changeValue(int x)
{
    x = 15;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 1;
    changeValue(x);
    cout << x << "\n";
}