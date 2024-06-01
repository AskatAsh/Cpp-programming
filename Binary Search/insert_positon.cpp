#include <iostream>
using namespace std;

int insert_position(int arr[], int n, int value)
{
    int left = 0, right = n - 1, mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
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

    cout << "Value to search: ";
    cin >> value;

    int ans = insert_position(arr, n, value);
    cout << "Target found at index: " << ans << endl;

    delete[] arr;
    return 0;
}