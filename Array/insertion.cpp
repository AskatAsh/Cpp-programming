#include <iostream>
using namespace std;

void arrayInsertion(int array[], int size, int num, int pos)
{
    // for (int i = size; i > pos; i--)
    // {
    //     array[i] = array[i - 1];
    // }
    array[size] = array[pos];
    array[pos] = num;
    cout << "Output after insertion:" << endl;
    for (int i = 0; i <= size; i++)
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

    cout << "Num and position to insert: ";
    cin >> num >> pos;

    if (pos < 0 || pos > size)
    {
        cout << "Error: Invalid position!" << endl;
    }
    else
    {
        arrayInsertion(array, size, num, pos);
    }
}