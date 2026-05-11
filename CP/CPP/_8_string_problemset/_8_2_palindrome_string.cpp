// Palindrome Check

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "abba";

    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s.at(i++) != s.at(j--))
        {
            cout << "not palindrome\n";
            return 0;
        }
    }
    cout << "palindrome";
}