#include <iostream>
using namespace std;

// function with no parameter and no return type
void greet()
{
    cout << "Hello World!\n";
}

// function with parameter and return type
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    greet();
    cout << sum(2, 3) << "\n";
}