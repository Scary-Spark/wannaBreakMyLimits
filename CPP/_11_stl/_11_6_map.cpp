#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // map: pair of key and value + it's sorted
    map<string, int> price;

    // multi map: allow dublicate key
    multimap<int, int> mmp;

    // unorderd map is not sorted
    unordered_map<int, int> uomp;

    // insert (method-1)
    price["laptop"] = 1000;
    price["tv"] = 3002;
    price["headphone"] = 23;

    // insert (method-2)
    price.insert({"keyboard", 233});
    price.insert({"mouse", 32});

    // access
    cout << price["keyboard"] << "\n";

    // traversal
    for (auto p : price)
    {
        cout << p.first << ", " << p.second << "\n";
    }

    // size
    cout << "Size: " << price.size() << "\n";

    // empty
    cout << "Is empty? " << price.empty() << "\n";

    // erase
    price.erase("keyboard");

    // another traversal technique
    for (auto &[key, value] : price)
    {
        cout << key << " " << vlaue << "\n";
    }

    return 0;
}