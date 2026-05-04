#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // set: unique + sorted (ASC)
    set<int> s;

    // insert element
    s.insert(10);
    s.insert(15);
    s.insert(2467);
    s.insert(224);
    s.insert(11);
    s.insert(3);
    s.insert(7);
    s.insert(10); // as 10 already exists so ignored

    // check existense of a element
    auto it = s.find(10);
    if (it != s.end())
        cout << "found\n";

    // remove a element
    s.erase(3);

    // remove value a a index
    s.erase(s.begin());

    // size/length
    cout << s.length() << "\n";

    // check for if empty
    cout << "Is empty? " << s.empty() << "\n";

    // access the smallest
    cout << "Smallest: " << *s.begin() << "\n";

    // access the largest
    cout << "largest: " << *s.rbegin() << "\n";
}