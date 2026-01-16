#include <iostream>
using namespace std;

int main()
{
    int month = 12;

    switch (month)
    {
    case 1:
        cout << "This is january";
        break;
    case 2:
        cout << "This is february";
        break;
    default:
        cout << "Invalid input" << endl;
    }
}