#include<bits/stdc++.h>
using namespace std;

void is_sorted(int array[], int size)
{
    if(size <= 1)
    {
        cout<<"True"<<endl;
        return;
    }
    int count = 0;
    for(int i=0; i<size-1; i++)
    {
        if(array[i] <= array[i+1])
        {
            count++;
        }
    }
    (count == size-1) ? cout<<"True"<<endl : cout<<"False"<<endl;
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
    is_sorted(array, size);
}