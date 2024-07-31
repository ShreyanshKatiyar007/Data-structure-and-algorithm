#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[10];
    cout << "Enter the elements of an array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, 10);
    cout << endl
         << "Reverse array is:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
