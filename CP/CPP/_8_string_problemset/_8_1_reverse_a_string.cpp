// reverse a string

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "hello";

    int i = 0;
    int j = s.length() - 1;
    while (i < j)
        swap(s.at(i++), s.at(j--));

    cout << "Reverse String: " << s << "\n";
}