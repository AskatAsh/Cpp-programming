#include <iostream>
#include <algorithm>
using namespace std;

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int find_insert_position(int array[], int size, int value, int low, int high)
{
    int mid = low + (high-low) / 2;
    if (value == array[mid])
        return mid;
    else if (array[mid] > value) high = mid-1;
    else low = mid+1;
    return low;
}

void insert_element(int array[], int &size, int value)
{
    int insert_pos = find_insert_position(array, size, value, 0, size - 1);
    for (int i = size - 1; i >= insert_pos; i--)
    {
        array[i + 1] = array[i];
    }
    array[insert_pos] = value;
    size++;
    print_array(array, size);
}

int main()
{
    int size;
    cout << "Enter array size: ";

    cin >> size;
    int array[size];

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array, array + size);

    int value;
    cout << "Enter Value to insert: ";
    cin >> value;

    // int insert_pos = find_insert_position(array, size, value, 0, size - 1);
    // cout << "Insert Position: " << insert_pos << endl;
    insert_element(array, size, value);
}