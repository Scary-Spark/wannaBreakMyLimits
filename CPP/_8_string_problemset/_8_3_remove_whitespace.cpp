// remove whitespace

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "    s pa      r k       ";
    string result = "";

    for (char c : s)
    {
        if (c != ' ')
            result += c;
    }

    cout << result << "\n";
}