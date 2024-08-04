#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5); // consider only one time as set takes only unique elements
    s.insert(1);
    s.insert(6);
    s.insert(9);
    s.insert(6);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << endl;

    /* set<int>::iterator it = s.begin();
       it++;

       s.erase(it);    */

    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "5 is present or not: " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5); // if it finds the element then we get the iterator(reference) of that element.
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
