#include <iostream>
using namespace std;

int EvenOrOdd()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int ans = EvenOrOdd();
    if (ans == 1) {
        cout << "Entered number is even";
    }
    else {
        cout << "Entered number is odd";
    }
}
