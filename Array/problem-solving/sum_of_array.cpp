#include<iostream>
using namespace std;

int array_sum(int array[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter array size: ";

    cin >> size;
    int array[size];

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int sum = array_sum(array, size);
    cout<<"Sum of array: "<<sum<<endl;
}