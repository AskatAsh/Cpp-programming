#include <iostream>
using namespace std;

void array_replacement(int array[], int size)
{
    for(int i=0; i<size; i++){
        if(array[i]%3 == 0){
            array[i] = -1;
        }
    }
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;

    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    array_replacement(array, size);
}