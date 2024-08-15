#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {2, 7, 0, 1, -4, 9, 24, 19, -5, 11};
    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is absent";
    }
}
