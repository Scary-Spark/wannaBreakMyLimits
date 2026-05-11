#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 2;

    string ans = (x % 2 == 0) ? "Even" : "Odd";
    cout << ans << "\n";

    // nested
    ans = (x == 0) ? "X is zero\n" : ((x > 0) ? "Positive\n" : "Negative");
    cout << ans;
}