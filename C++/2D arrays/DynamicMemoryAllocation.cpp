#include <iostream>
using namespace std;

int main()
{
    /*
    int n;
    cin>>n;
    int **arr = new int*[n];
    */

    int row;
    cout << "Enter the number of rows:" << endl;
    cin >> row;

    int col;
    cout << "Enter the number of cols:" << endl;
    cin >> col;

    // creating 2d array
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    cout << "Enter the elements of 2d array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
}
