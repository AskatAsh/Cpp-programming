#include<iostream>
#include<vector>
using namespace std;

void print_array(vector<int> &arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

// space complexity: O(n)
// time complexity: O(n^2) / O(size^2)
void bubble_sort(vector<int> &arr, int size)
{
    for(int i=1; i<size; i++)
    {
        bool swaped = false;
        cout<<"Loop count: "<<i<<endl;
        for(int j=0; j<size-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swaped = true;
            }
            print_array(arr, size);
        }
        if(!swaped) break;
    }
}

int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    // int *arr = new int[size];
    vector<int> arr(size);
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr, size);
    // print_array(arr, size);

    // delete[] arr;

    return 0;
}