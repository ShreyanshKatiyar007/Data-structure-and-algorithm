#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // creating a stack
    stack<int> s;

    s.push(5); // inserting element
    s.push(7);
    s.push(10);

    s.pop(); // removing element

    cout << "Top element is: " << s.top() << endl; // returns the first element

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is: " << s.size() << endl; // return the number of elements present in stack

    return 0;
}