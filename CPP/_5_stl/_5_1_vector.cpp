#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // size: number of elements inside vector
    // capacity: maximum number of elements that a vector can hold

    vector<int> vec;
    vec.push_back(1); // capacity 1
    vec.push_back(2); // capacity 2
    vec.push_back(3); // capcacity 4
    vec.push_back(4); // capacity 4
    vec.push_back(5); // capacity 8
    vec.push_back(6); // capacity 8
    vec.push_back(7); // capacity 8
    vec.push_back(8); // capacity 8
    vec.push_back(9); // capacity 16

    // another way to add elements
    vec.emplace_back(10);

    // pop last elements
    vec.pop_back();

    // size of vector
    cout << "Size of vec: " << vec.size() << endl;
    cout << "Capacity of vec: " << vec.capacity() << endl;

    // print vector
    cout << "Elements: ";
    for (auto a : vec)
    {
        cout << a << " ";
    }
    cout << endl;

    // value at any index
    cout << "Value at 3rd index: " << vec.at(3) << endl;
    // or
    cout << "value at 3rd index: " << vec[3] << endl;

    // first element
    cout << "First element: " << vec.front() << endl;
    // last element
    cout << "Last element: " << vec.back() << endl;

    // another way to initialize vector
    vector<int> vec2 = {1, 2, 3, 4, 5};

    //! creating a vector that has same element and also it's size defined
    vector<int> vec3(3, 10); // size 3, value 10

    // copy a vector from another vector
    vector<int> vec4(vec);
}
