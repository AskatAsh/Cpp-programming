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

void insert_element(int array[], int &size, int element, int pos)
{
    if(pos-1 == size){
        array[pos-1] = element;
        size++;
        print_array(array, size);
    }
    else if(pos-1 >= size+1){
        cout<<"There is no position "<<pos<<" available"<<endl;
        cout<<"Inserted element in position "<<size+1<<endl;
        array[size] = element;
        size++;
        print_array(array, size);
    }
    else if(pos < 1){
        cout<<"There is no position "<<pos<<" available"<<endl;
        cout<<"Inserted element in position "<<size+1<<endl;
        array[size] = element;
        size++;
        print_array(array, size);
    }
    else{
        array[size] = array[pos-1];
        array[pos-1] = element;
        size++;
        print_array(array, size);
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

    int value, pos, element;
    cout << "Enter number of values to insert: ";
    cin >> value;
    while (value--)
    {
        cout << "Enter element to insert: ";
        cin >> element;
        cout << "Enter insert position(not index): ";
        cin >> pos;
        insert_element(array, size, element, pos);
    }
}