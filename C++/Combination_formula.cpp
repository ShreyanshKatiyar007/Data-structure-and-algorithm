#include <iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = fact(n);
    int denom = fact(r) * fact(n - r);

    int ans = num / denom;

    return ans;
}
int main()
{
    int n;
    cin >> n;
    int r;
    cin >> r;
    cout << nCr(n, r);
}
