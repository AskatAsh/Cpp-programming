#include<iostream>
using namespace std;

int last_occurance(int arr[], int n, int value)
{
    if(arr[n-1] == value) return n-1;

    int left = 0, right = n-2, mid, index = -1;
    while(left<=right)
    {
        mid = left+(right-left)/2;

        if(arr[mid] == value){
            index = mid;
            left = mid+1;
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

    int ans = last_occurance(arr, n, value);
    if(ans == -1){
        cout<<"Target value not found."<<endl;
    }else{
        cout<<"Target last found at index: "<<ans<<endl;
    }
}