#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    // these are pseudo-random = NOT truly random (But close)

    srand(time(NULL));

    int num = (rand() % 6) + 1; // 0 to 6
    cout << num << endl;
}