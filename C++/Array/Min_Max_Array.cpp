#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // maxi = max(maxi,num[i])
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n)
{

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // mini = min(mini,num[i])
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum element is: " << getMax(num, size) << endl;
    cout << "Minimum element is: " << getMin(num, size);
}
