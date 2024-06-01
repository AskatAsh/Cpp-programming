#include<iostream>
using namespace std;

int fist_occurance(int arr[], int n, int value)
{
    if(arr[0] == value) return 0;

    int left = 1, right = n-1, mid, index = -1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;

        if(arr[mid] == value){
            index = mid;
            right = mid-1;
        }else if(arr[mid] < value){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return index;
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

    int ans = fist_occurance(arr, n, value);
    if(ans == -1){
        cout<<"Target value not found."<<endl;
    }else{
        cout<<"Target first found at index: "<<ans<<endl;
    }
}