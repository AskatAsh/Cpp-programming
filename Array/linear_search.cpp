#include <iostream>
using namespace std;

void linearSearch(int array[], int size, int value)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            cout << value << " found at index " << i << endl;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << value << " not found in array!" << endl;
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
    char ch;
    cout << "Do you want to search?(y/n): ";
    cin >> ch;
    while (tolower(ch) == 'y')
    {
        cout << "Value to search: ";
        cin >> value;
        linearSearch(array, size, value);

        cout << "Do you want to continue searching?(y/n): ";
        cin >> ch;
    }
}