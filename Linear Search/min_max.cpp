#include <iostream>
using namespace std;

int minimum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n, value;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = minimum(arr, n);
    int max = maximum(arr, n);

    cout << "Minimum: " << min << " Maximum: " << max << endl;
}