#include <iostream>
using namespace std;

// Function Signature
int power()
{

    // Function body
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{

    cout << "power of " << power() << endl; // Function call
}