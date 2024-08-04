#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> a(5, 1); // vector 'a' with size 5 and every element is intialize to 1.(default case - 0)
    cout << "Printing Vector named 'a':" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }

    vector<int> last(a); // Copyiing all the elements of vector 'a' to vector 'last'.
    cout << "\nPrinting vector named 'last':" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }

    vector<int> v;
    cout << "\ncapacity: " << v.capacity() << endl; // How much space or memory is allocated for the elements present in vector.

    v.push_back(1); // pushing element in vector.
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity: " << v.capacity() << endl;
    cout << "size: " << v.size() << endl; // Number of elements present.

    cout << "Element at 2nd Index: " << v.at(2) << endl;

    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // Last element ko pop karega

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\nbefore clear: " << v.size() << endl;
    v.clear();
    cout << "After clear: " << v.size() << endl;
}
