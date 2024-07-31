// Swapping alternate elements of an array.

#include <iostream>
using namespace std;

void SwapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[6] = {2, 7, 1, 0, 19, 24};
    SwapAlternate(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}
