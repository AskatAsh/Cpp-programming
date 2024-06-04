#include<iostream>
using namespace std;

int main()
{
    // int *x = new int;
    // *x = 24;
    // cout<<*x<<endl;
    // delete x;

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";

    delete[] arr;
}