#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j; // n-j+1 --> for reverse output
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 5)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int i = 1; i <= n; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    int val;
    for (int i = 1; i <= n; i++)
    {
        val = i;
        for (int j = 1; j <= i; j++)
        {
            cout << val << " ";
            val++;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
