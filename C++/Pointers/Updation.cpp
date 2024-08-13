#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int a = num;
    cout << "a before updation:" << num << endl;
    a++; // no change in a value stored in num.
    cout << "a after updation:" << num << endl;

    int *p = &num;
    cout << "*p before updation:" << num << endl;
    (*p)++;
    cout << "*p after updation:" << num << endl;

    cout << "before p increament:" << p << endl;
    p = p + 1; // store the address of next integer
    cout << "after p increament:" << p << endl;

    int *q = p; // copying one pointer to another pointer.
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
}
