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

void insert_element(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > value)
        {
            cout<<"Iteration count: "<<i<<endl;
            for (int j = size - 1; j >= i; j--)
            {
                array[j + 1] = array[j];
            }
            array[i] = value;
            break;
        }
    }
    print_array(array, size+1);
}

int main()
{
    int size;
    cout << "Enter array size: ";

    cin >> size;
    int array[size + 1];

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    sort(array, array + size);

    int value;
    cout << "Enter Value to insert: ";
    cin >> value;

    insert_element(array, size, value);
}