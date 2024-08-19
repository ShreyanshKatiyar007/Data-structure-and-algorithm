#include <iostream>
using namespace std;

void update1(int n)
{

    n++;
}

void update2(int &n)
{

    n++;
}
int main()
{

    int i = 5;
    int &j = i;    // creating reference variable

    cout << i << endl;
    cout << j << endl;

    int n = 10;

    cout << endl;
    cout << "This is update1:" << endl;
    cout << "before:" << n << endl;
    update1(n);
    cout << "after:" << n << endl;

    cout << endl;

    cout << "This is update2:" << endl;
    cout << "before:" << n << endl;
    update2(n);
    cout << "after:" << n << endl;
}
