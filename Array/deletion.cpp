#include <iostream>
using namespace std;

void arrayDeletion(int array[], int size, int pos)
{
    if (pos == size - 1)
        size--;
    else
    {
        for (int i = pos+1; i < size; i++)
        {
            array[i-1] = array[i];
        }
    }

    cout << "Output after Deletion:" << endl;
    for (int i = 0; i < size-1; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[10], size, num, pos;
    cout << "Enter array size: ";
    cin >> size;

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Position of number to Delete: ";
    cin >> pos;

    if (pos < 0 || pos > size-1)
    {
        cout << "Error: Invalid position!" << endl;
    }
    else
    {
        arrayDeletion(array, size, pos);
    }
}