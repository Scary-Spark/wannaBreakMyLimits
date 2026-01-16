#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    cout << "Size of a: " << sizeof(a) << endl; // return the size of a (int)in bytes
    cout << "Size of string: " << sizeof(std::string) << endl;

    // finding the number of elements in a array
    char grades[] = {'a', 'b', 'c', 'd'};
    cout << "Number of elements inside the array: " << sizeof(grades) / sizeof(grades[0]) << endl;
}