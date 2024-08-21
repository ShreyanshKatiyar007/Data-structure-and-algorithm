#include <iostream>
using namespace std;

bool BinarySearch(int *arr, int s, int e, int key)
{

    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return BinarySearch(arr, s, mid - 1, key);
    }
}
int main()
{

    int arr[6] = {2, 4, 6, 10, 14, 18};
    int key;
    cout << "Enter the element you want to search:" << endl;
    cin >> key;

    int ans = BinarySearch(arr, 0, 5, key);

    if (ans)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is absent";
    }
}
