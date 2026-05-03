#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ========================
    // 🧱 CONSTRUCTORS
    // ========================
    vector<int> v1;                   // empty
    vector<int> v2(5);                // 5 zeros
    vector<int> v3(5, 10);            // 5 elements = 10
    vector<int> v4 = {1, 2, 3, 4, 5}; // initializer list

    cout << "Initial v4: ";
    for (int x : v4)
        cout << x << " ";
    cout << "\n\n";

    // ========================
    // ➕ INSERT / ADD
    // ========================
    v4.push_back(10);
    v4.emplace_back(20);

    v4.insert(v4.begin() + 1, 99);

    cout << "After insert/push: ";
    for (int x : v4)
        cout << x << " ";
    cout << "\n\n";

    // ========================
    // ➖ REMOVE
    // ========================
    v4.pop_back();
    v4.erase(v4.begin()); // remove first element

    cout << "After pop/erase: ";
    for (int x : v4)
        cout << x << " ";
    cout << "\n\n";

    // ========================
    // 🔍 ACCESS
    // ========================
    cout << "Front: " << v4.front() << "\n";
    cout << "Back: " << v4.back() << "\n";
    cout << "Index 1: " << v4[1] << "\n\n";

    // ========================
    // 📏 SIZE / CAPACITY
    // ========================
    cout << "Size: " << v4.size() << "\n";
    cout << "Empty: " << v4.empty() << "\n";
    cout << "Capacity: " << v4.capacity() << "\n\n";

    // ========================
    // 🔁 ITERATORS
    // ========================
    cout << "Using iterator: ";
    for (auto it = v4.begin(); it != v4.end(); it++)
        cout << *it << " ";
    cout << "\n\n";

    // ========================
    // 🔥 ALGORITHMS
    // ========================
    sort(v4.begin(), v4.end());
    cout << "Sorted: ";
    for (int x : v4)
        cout << x << " ";
    cout << "\n";

    reverse(v4.begin(), v4.end());
    cout << "Reversed: ";
    for (int x : v4)
        cout << x << " ";
    cout << "\n";

    auto it = find(v4.begin(), v4.end(), 10);
    if (it != v4.end())
        cout << "Found 10 at index: " << (it - v4.begin()) << "\n";
    else
        cout << "10 not found\n";

    // ========================
    // 🔄 CLEAR
    // ========================
    v4.clear();
    cout << "After clear, size: " << v4.size() << "\n";

    return 0;
}