#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> m; // sorted map

    m[1] = "shreyansh";
    m[15] = "computer science";
    m[2] = "katiyar";

    m.insert({5, "CU"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    m.erase(15);
    cout << "after erase:" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 15: " << m.count(15) << endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}
