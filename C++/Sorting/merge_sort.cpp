#include <iostream>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{

    int n1 = mid - s + 1;
    int n2 = e - mid;

    int *left = new int[n1];
    int *right = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[s + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0;
    int k = s;

    while (i < n1 && j < n2)
    {

        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int *arr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}
int main()
{

    int arr[10] = {5, 2, 29, 5, 28, 11, 15, 8, 0, 17};
    int n = 10;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
