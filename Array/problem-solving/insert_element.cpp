#include <iostream>
using namespace std;

void print_array(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void insert_element(int array[], int size, int value, int pos)
{
    array[size] = array[pos-1];
    array[pos-1] = value;
    print_array(array, size);
}

int main()
{
    int size;
    cout << "Enter array size: ";

    cin >> size;
    int array[size+1];

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int value, pos;
    cout << "Enter Value and Position: ";
    cin >> value >> pos;

    insert_element(array, size, value, pos);
}