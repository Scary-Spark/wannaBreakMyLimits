#include <iostream>
using namespace std;

int happyBirthday(int age);

int main()
{

    cout << "New age: " << happyBirthday(12) << endl;
    return 0;
}

int happyBirthday(int age)
{
    cout << "Happy Birthday to you" << endl;
    return age + 1;
}