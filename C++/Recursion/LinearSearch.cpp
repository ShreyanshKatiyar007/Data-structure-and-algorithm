#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{

    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    bool remainingPart = linearSearch(arr + 1, size - 1, key);
    return remainingPart;
}
int main()
{

    int arr[5] = {3, 5, 2, 8, 6};
    int key;
    cout << "Enter the element you want to search:" << endl;
    cin >> key;

    int ans = linearSearch(arr, 5, key);
    if (ans)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is absent";
    }
}
