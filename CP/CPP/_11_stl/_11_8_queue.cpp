#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // queue: FIFO (first in, first out)
    queue<int> q;

    // push (enqueue)
    q.push(10);
    q.push(40);
    q.push(1210);
    q.push(210);
    q.push(150);
    q.push(110);
    q.push(120);

    // access element
    cout << "First: " << q.front() << "\n";
    cout << "last: " << q.back() << "\n";

    // deletion (dequeue): Remove the first
    q.pop();

    // size
    cout << q.size() << endl;

    // traversal
    while (!q.empty())
    {
        cout << q.front() << "\n";
        q.pop();
    }
}