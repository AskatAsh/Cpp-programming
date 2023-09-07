#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,3,4,1,2};
    int n=5;
    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    ///sort function(initial pointer, ending pointer);
    sort(arr, arr+n);
    cout<<"\nAfter sorting:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
