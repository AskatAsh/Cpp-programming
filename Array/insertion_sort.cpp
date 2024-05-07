#include <iostream>
using namespace std;

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j+1] = key;
        print_array(array, size);
    }
}

int main()
{
    int size, value;
    cout << "Enter array size: ";

    cin >> size;
    int array[size];

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    insertion_sort(array, size);

    cout << "After Using insertion sort:" << endl;
    print_array(array, size);
}