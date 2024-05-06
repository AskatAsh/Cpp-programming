#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(int array[], int size)
{
    // 14 11 1  5  4
    // 0  1  2  3  4
    for (int i = 1; i < size; i++) //i = 3
    {
        int count = 0;
        for (int j = 0; j < size - 1; j++) // j = 0
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
            if(array[size-j-1] > array[size-j-2])
            {
                count++;
            }
        }
        // 1 5 4 11 14
        cout<<"loop count: "<<i<<endl;
        if(count == size-1) break;
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
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

    bubble_sort(array, size);

    cout << "After Using bubble sort:" << endl;
    print_array(array, size);
}