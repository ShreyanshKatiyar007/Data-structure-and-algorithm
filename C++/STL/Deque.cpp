#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d; // Creating deque

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);

    for (int i : d)
    {
        cout << i << " ";
    }

    d.pop_back(); // pop the last element
    cout << endl;

    cout << "Element at first Index: " << d.at(1);

    cout << "\nFirst Element: " << d.front() << endl;
    cout << "last Elemeent after pop: " << d.back();

    cout << "\nEmpty or not: " << d.empty() << endl;

    cout << "before erase: " << d.size();
    d.erase(d.begin(), d.begin() + 1);
    cout << "\nafter erase: " << d.size();

    cout << endl;

    for (int i : d)
    {
        cout << "Element left: " << i << " ";
    }
}
