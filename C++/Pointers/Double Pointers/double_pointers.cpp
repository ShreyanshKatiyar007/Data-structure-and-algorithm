#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int *p = &i;
    int **p2 = &p; // double pointer

    // value of i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << endl;
    cout << endl;

    // value of p
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << endl;
    cout << endl;

    // value of p2
    cout << &p << endl;
    cout << p2 << endl;
}
