#include <iostream>
using namespace std;

int power(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        // a^(b/2) *a^(b/2)
        return ans * ans;
    }
    else
    {
        // a * (a^(b/2) * a^(b/2))
        return a * ans * ans;
    }
}
int main()
{

    int a, b;

    cout << "Enter the base value:" << endl;
    cin >> a;

    cout << "Enter the power value:" << endl;
    cin >> b;

    int ans = power(a, b);

    cout << "Answer is:" << ans << endl;
}
