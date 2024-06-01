#include <iostream>
using namespace std;

int peak_in_mountain_array(int arr[], int n)
{
    int left = 0, right = n - 1, mid;

    while (left < right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid+1] > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = peak_in_mountain_array(arr, n);
    cout << "Peak target found at index: " << ans << endl;

    delete[] arr;
    return 0;
}