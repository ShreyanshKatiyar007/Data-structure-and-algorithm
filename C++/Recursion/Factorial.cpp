#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of the number is:" << ans << endl;
}
