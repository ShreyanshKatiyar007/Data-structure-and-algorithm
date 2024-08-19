#include <iostream>
using namespace std;

void SayDigit(int n, string arr[])
{

    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;

    SayDigit(n, arr);

    cout << arr[digit] << " ";
}
int main()
{

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    SayDigit(n, arr);
}
