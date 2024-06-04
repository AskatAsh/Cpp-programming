#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

    cin>>q;
    int *queries = new int[q];
    for(int i=0; i<q; i++)
    {
        cin>>queries[i];
    }

    for(int i=0; i<q; i++)
    {
        bool found = 0;
        int left = 0, right = n-1, mid;
        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(arr[mid] == queries[i])
            {
                found = 1;
                break;
            }
            else if(arr[mid]<queries[i])
            {
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}