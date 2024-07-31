#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
   // int mid = (start + end) / 2;
   int mid = start + (end-start)/2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        //mid = (start + end)/2;
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[5] = {0,5,11,19,27};
    int index = binarySearch(arr, 5, 30);
    cout << "Element is present at " << index << " index";
}
