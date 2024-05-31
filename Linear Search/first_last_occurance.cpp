#include <iostream>
#include <tuple>
using namespace std;

std::tuple<int, int> first_and_last_occurance(int *arr, int n, int value)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            first = i;
            break;
        }
    }

    if (first != -1)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == value)
            {
                last = i;
                break;
            }
        }
    }

    return std::make_tuple(first, last);
}

int main()
{
    int n, value;
    cout << "Enter array size: ";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Value to search: ";
    cin >> value;

    auto ans = first_and_last_occurance(arr, n, value);
    int first, last;
    std::tie(first, last) = ans;
    if (first == -1 && last == -1)
    {
        cout << "Value not found." << endl;
    }
    else
    {
        cout << "Found value first at: " << first << " last at: " << last << endl;
    }

    delete[] arr;
}