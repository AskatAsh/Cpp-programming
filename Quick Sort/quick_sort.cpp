#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> quick_sort(vector<int> &arr)
{
    // base case
    if(arr.size()<=1)
    {
        return arr;
    }
    int pivot;
    pivot = arr.size()/2;
    vector<int>left,right;
    for(int i=0; i<arr.size(); i++)
    {
        if(i == pivot) continue;
        else if(arr[i] <= arr[pivot])
        {
            left.push_back(arr[i]);
        }
        else{
            right.push_back(arr[i]);
        }
    }

    vector<int> sorted_left = quick_sort(left);
    vector<int> sorted_right = quick_sort(right);
    vector<int> sorted_arr;
    for(int i=0; i<sorted_left.size(); i++)
    {
        sorted_arr.push_back(sorted_left[i]);
    }
    sorted_arr.push_back(arr[pivot]);
    for(int i=0; i<sorted_right.size(); i++)
    {
        sorted_arr.push_back(sorted_right[i]);
    }
    return sorted_arr;
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> sorted_arr = quick_sort(arr);

    cout<<"After quick sort:"<<endl;
    print_array(sorted_arr);
    return 0;
}