#include <iostream>
using namespace std;

int main()
{
    pair<int, pair<int, int>> p = {10, {20, 30}};

    cout << p.first << "\n";
    cout << p.second.first << "\n";
    cout << p.second.second << "\n";
}