#include <iostream>
#include<algorithm>
using namespace std;

void delete_duplicate(int array[], int size)
{
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; ){
            if(array[i] == array[j])
            {
                for(int k=j; k<size-1; k++)
                { 
                    array[k] = array[k+1];
                }
                size--;
            }else j++;
        }
    }
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
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

    delete_duplicate(array, size);
}