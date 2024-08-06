#include <iostream>
using namespace std;

void reverse(char name[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int main()
{

    char name[9];

    cout << "Enter your name:" << endl;
    cin >> name;

    cout << "your name is:";
    cout << name;

    reverse(name, 9);
    cout << "\nReverse of your name is:" << name;
}
