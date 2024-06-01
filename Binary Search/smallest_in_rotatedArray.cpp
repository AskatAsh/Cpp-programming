#include <iostream>
using namespace std;

int smallest_in_rotated_array(int arr[], int n)
{
    int left = 0, right = n - 1, mid, smallest;

    while (left < right)
    {
        mid = left + (right - left) / 2;

        if (arr[right] < arr[mid])
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
    int n, value;
    cout << "Enter array size: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = smallest_in_rotated_array(arr, n);
    cout << "Smallest target found at index: " << ans << endl;
}