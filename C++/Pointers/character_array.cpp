#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;   // return the address of the base memeory

    cout << ch << endl;    // return the elements present in array.

    char *c = &ch[0];
    cout << c << endl;    // retun=rn the entire string

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;    // print until it gets the null character.
}
