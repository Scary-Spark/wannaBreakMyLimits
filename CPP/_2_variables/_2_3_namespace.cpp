#include <iostream>
using namespace std;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    int x = 0;
    std::cout << x << endl;

    std::cout << first::x << endl;
    std::cout << second::x << endl;

    // using namespace first;
    // std::cout << x << endl; output: 1
}