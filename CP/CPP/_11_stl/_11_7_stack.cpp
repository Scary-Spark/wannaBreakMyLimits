#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // LIFO (last in first out)
    stack<int> st;

    // push (insert)
    st.push(20);
    st.push(50);
    st.push(40);
    st.push(10);
    st.push(30);

    // pop (delete the top element)
    st.pop(); // delete 30

    // top of the stack
    cout << "Top of the stack: " << st.top() << "\n";

    // size of stack
    cout << "length: " << st.size() << "\n";

    // empty stack
    cout << "is empty? " << st.empty() << "\n";

    // traversal
    while (!st.empty())
    {
        cout << st.top() << ", ";
        st.pop();
    }
    cout << endl;
}