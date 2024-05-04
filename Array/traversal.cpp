#include<iostream>
using namespace std;

void printArray(int array[],int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int array[50], size;
    cout<<"Enter array size: ";
    cin>>size;

    cout<<"Array input:"<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    cout<<"Array output:"<<endl;
    printArray(array, size);
}