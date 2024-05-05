#include <iostream>
using namespace std;

int even_index_sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            sum += array[i];
        }
    }
    return sum;
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

    int sum = even_index_sum(array, size);
    cout << "Sum of array of even indexed position: " << sum << endl;
}