#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int value)
{
    int left = 0, right = n-1, mid;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(arr[mid] == value) return mid;
        else if(arr[mid] < value){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n, value;
    cout << "Enter array size: ";
    cin >> n;
    int *arr = new int[n];

    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Value to search: ";
    cin >> value;

    int ans = binary_search(arr, n, value);
    if(ans == -1){
        cout<<"Target value not found."<<endl;
    }else{
        cout<<"Target found at index: "<<ans<<endl;
    }
}