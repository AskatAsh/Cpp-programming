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

void bubble_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool swaped = false;
        cout<<"loop count: "<<i<<endl;
        cout<<endl;
        for (int j = 0; j < size-i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                swaped = true;
            }
            print_array(array, size);
        }
        if(!swaped) break;
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

    bubble_sort(array, size);

    cout << "After Using bubble sort:" << endl;
    print_array(array, size);
}