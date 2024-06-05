#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print_array(vector<int> &arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(vector<int> &arr, int size)
{
    for(int i=1; i<size; i++)
    {
        int value = arr[i], j = i-1;
        // cout<<"On iteration: "<<i<<endl;
        while(arr[j] > value && j >= 0)
        {
            swap(arr[j], arr[j+1]);
            j--;
            // print_array(arr, size);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    vector<int> arr(size);
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    insertion_sort(arr, size);
    print_array(arr, size);

}