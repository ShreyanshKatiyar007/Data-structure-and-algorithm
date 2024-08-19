#include <iostream>
using namespace std;

void count(int n)
{

    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    count(n - 1);
}
int main()
{

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    cout << "Reverse counting from the number is:" << endl;
    count(n);
}
