#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("I");
    q.push("am");
    q.push("Shreyansh");
    q.push("Katiyar");

    cout << "Size before pop: " << q.size() << endl;
    cout << "First Element: " << q.front() << endl;

    cout << endl;

    q.pop();
    cout << "Size after pop: " << q.size() << endl;
    cout << "First Element: " << q.front() << endl;
}
