#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        int Min_Num = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[Min_Num])
                Min_Num = j;
        }
        if (Min_Num != i)
            swap(arr[Min_Num], arr[i]);
    }
}

void PrintArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {29, 2, 45, 32, 17, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);
    cout << "Sorted array:" << endl;
    PrintArray(arr, n);
}
