// fast io

#include <iostream>
using namespace std;

int main()
{
    // if input is greater than 10^5 or 10^6 normar io can be slow
    // so we add this 2 lines:
    // also using '\n' is much faster than using endl;

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // line 1: turn off sync between stdio C (scanf) and c++(cin)
    // line 2: stop automatic flushing
    // flusing force the output buffer to immediately send data to screen

    int x;
    cin >> x;
    cout << x << '\n';
}