#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // higesht value element at the top
    priority_queue<int> p;

    // insert
    p.push(10);
    p.push(43);
    p.push(121);
    p.push(5);

    // top element
    cout << "top: " << p.top() << " ";

    // pop top
    p.pop();

    // traversal
    while (!p.empty())
    {
        cout << p.top() << ", ";
        p.pop();
    }
}