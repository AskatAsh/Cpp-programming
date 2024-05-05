#include <iostream>
using namespace std;

void max_min(int array[], int size)
{
    int max = array[0], min = array[0], max_index = 0, min_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] >= max)
        {
            max = array[i];
            max_index = i;
        }
        if (array[i] <= min)
        {
            min = array[i];
            min_index = i;
        }
    }
    cout << "Max: " << max << ", Index: " << max_index << endl;
    cout << "Min: " << min << ", Index: " << min_index << endl;
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
    max_min(array, size);
}