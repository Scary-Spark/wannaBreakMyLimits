#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // occurs when taking string input after int input
    // like:

    // int n;
    // cin >> n;
    // string s;
    // getline(cin, s); // buffer occured

    // fix
    int n;
    cin >> n;

    // method 1: (ignore 1 char)
    // cin.ignore();

    // method 2: (safest)
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);
}