#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{

    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);
    cout << "sum is:" << ans;
}
