#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 🔤 Initialization
    string s = "hello";
    string t = "world";

    cout << "Original s: " << s << "\n";

    // 📏 Length
    cout << "Length: " << s.length() << "\n";

    // 🔍 Access
    cout << "First char: " << s[0] << "\n";
    cout << "Second char (safe): " << s.at(1) << "\n";

    // ➕ Concatenation
    string combined = s + " " + t;
    cout << "Concatenated: " << combined << "\n";

    // 🔧 Append
    s.append("!!!");
    cout << "After append: " << s << "\n";

    // ➕ push_back / pop_back
    s.push_back('X');
    cout << "After push_back: " << s << "\n";

    s.pop_back();
    cout << "After pop_back: " << s << "\n";

    // ✂️ Substring
    string sub = combined.substr(0, 5);
    cout << "Substring (0,5): " << sub << "\n";

    // 🔎 Find
    int pos = combined.find("world");
    cout << "Position of 'world': " << pos << "\n";

    // ✂️ Erase
    string temp = combined;
    temp.erase(5, 1); // remove space
    cout << "After erase: " << temp << "\n";

    // ➕ Insert
    temp.insert(5, "_");
    cout << "After insert: " << temp << "\n";

    // 🔁 Reverse
    string rev = combined;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: " << rev << "\n";

    // 🔤 Sort
    string sorted = combined;
    sort(sorted.begin(), sorted.end());
    cout << "Sorted: " << sorted << "\n";

    // 🔠 Case conversion
    string upper = combined;
    for (char &c : upper)
        c = toupper(c);
    cout << "Uppercase: " << upper << "\n";

    string lower = upper;
    for (char &c : lower)
        c = tolower(c);
    cout << "Lowercase: " << lower << "\n";

    // 🔢 String → int
    string numStr = "123";
    int num = stoi(numStr);
    cout << "String to int: " << num << "\n";

    // 🔢 int → string
    string back = to_string(num);
    cout << "Int to string: " << back << "\n";

    // ⚖️ Compare
    if (s == "hello!!!")
        cout << "Comparison: Equal\n";
    else
        cout << "Comparison: Not equal\n";

    return 0;
}