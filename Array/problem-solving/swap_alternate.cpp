#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<size-1; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}