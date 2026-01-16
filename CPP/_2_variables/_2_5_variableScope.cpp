#include <iostream>
using namespace std;

// global variable
int globalNum = 5;
int let = 12;

void printNum();

int main()
{
    int myNum = 1;
    cout << "From main function: " << globalNum + myNum << endl;
    printNum();
}

void printNum()
{
    // local variable:
    int x = 2;
    cout << "From printNum function: " << globalNum + x << endl;

    // also need to remember
    cout << "Previous let value: " << let << endl;
    // now we define the new value locally
    int let = 15;
    cout << "New local value: " << let << endl;
    // but now we can also print the global value in this way
    cout << "Global value: " << ::let << endl;
}