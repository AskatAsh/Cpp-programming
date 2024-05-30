#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(int i=0; i<size; i++){
        // cout<<ans<<" ^ "<<arr[i];
        ans = ans^arr[i];
        // cout<<" : "<<ans<<endl;
    }
    cout<<"Unique: "<<ans<<endl;
}