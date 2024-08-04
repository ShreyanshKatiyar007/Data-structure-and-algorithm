#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("I");
    s.push("am");
    s.push("Shreyansh");
    s.push("Katiyar");

    cout << "Top Element: " << s.top() << endl;

    s.pop();
    cout << "Size of stack: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;
}
