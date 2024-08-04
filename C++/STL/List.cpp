#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    // list<int> n(55,100);

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase:" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "\nsize of list:" << l.size() << endl;
}
