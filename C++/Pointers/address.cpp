#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {23, 122, 41, 67};

    cout << "address of first memory block is: " << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first memory block is: " << &arr[0] << endl;

    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr) + 1 << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    cout << "size of addresses and values:" << endl;

    int temp[10] = {1, 2};
    // temp = temp + 1;   // this will give error bcz we can cannot change/reassign  the symbol table.
    cout << "address of temp:" << &temp[0];
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "address of ptr where temp is stored:" << &ptr;
    ptr = ptr + 1; // this will change the address.
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
}
