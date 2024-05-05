#include <iostream>
#include <algorithm>
using namespace std;

void array_reverse(int array[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - (i + 1)];
        array[size - (i + 1)] = temp;
    }
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
    array_reverse(array, size);
    cout << "Array reverse output:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}