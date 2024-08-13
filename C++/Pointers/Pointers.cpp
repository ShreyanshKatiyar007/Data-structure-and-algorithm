#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    cout << num << endl;

    // address of operator
    cout << "address of num is:" << &num << endl;

    // pointer declaration
    int *ptr = &num;
    cout << "value is:" << *ptr << endl;
    cout << "Address is:" << ptr << endl;

    cout << "size of intege r is:" << sizeof(num) << endl;
    cout << "size of pointer is:" << sizeof(ptr) << endl;

    int *p = 0;
    p = &num;

    cout << "value is:" << *p << endl;
    cout << "Address is:" << p << endl;
}
