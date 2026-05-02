#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 0;
    do
    {
        if (i == 3)
        {
            i++;
            continue;
        }

        cout << "i is: " << i << ",\n";
        i++;

        if (i == 6)
            break;
    } while (i < 10);
}