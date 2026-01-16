#include <iostream>
using namespace std;
int main()
{
    int marks[] = {2, 1, 23, 1, 5, 12};

    cout << "elements: ";
    for (int i : marks)
    {
        cout << i << " ";
    }
    cout << endl;
}