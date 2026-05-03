#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // init
    pair<int, int> p1;
    pair<int, int> p2 = {10, 25};

    p1.first = 22;
    p1.second = 33;

    cout << p1.first << ", " << p1.second;
}