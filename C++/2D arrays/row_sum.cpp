// sum of the elements of their respective rows.

#include <iostream>
#include <limits.h>
using namespace std;

void printSum(int arr[][4], int i, int j)
{

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int largestRowSum(int arr[][4], int i, int j)
{

    int max = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            rowIndex = i;
        }
    }

    cout << "The maximum sum is:" << max << endl;
    return rowIndex;
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

    cout << "your array is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "sum of all the elements of their respective row is" << endl;
    printSum(arr, 3, 4);

    cout << endl;
    int index = largestRowSum(arr, 3, 4);
    cout << "row with largest sum is at index:" << index << endl;
}
