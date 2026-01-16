#include <iostream>
using namespace std;
int main()
{
    string name = "Spark";

    cout << "Length: " << name.length() << endl;
    cout << "Empty: " << name.empty() << endl;
    cout << "Append: " << name.append("@gmail.com") << endl;
    cout << "Character at index: " << name.at(2) << endl;

    // insert character at any index
    cout << name.insert(0, "hi") << endl;

    // find any character
    cout << name.find("Sp") << endl;

    // remove a portion of the character stringName.erase(begginingIndex, endIndex)
    cout << name.erase(0, 3) << endl;

    // clear a string:
    name.clear();
}