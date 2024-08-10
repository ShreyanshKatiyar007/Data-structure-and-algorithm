#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (target == arr[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{

    int arr[3][4];

    cout << "enter the elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the element you want to search:";
    int target;
    cin >> target;

    int ans = isPresent(arr, target, 3, 4);

    if (ans == 1)
    {
        cout << "target is present";
    }
    else
    {
        cout << "target is absent";
    }
}
