#include<iostream>
#include<vector>
using namespace std;

// Time Complexity: O(nlog(n))
vector<int> merge_sort(vector<int>arr)
{
    // base case
    if(arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size()/2;
    vector<int>a, b;
    
    for(int i=0; i<mid; i++){
        a.push_back(arr[i]);
    }
    for(int i=mid; i<arr.size(); i++){
        b.push_back(arr[i]);
    }

    vector<int>sorted_a = merge_sort(a);
    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_arr;
    int idx1 = 0, idx2 = 0;
    for(int i=0; i<arr.size(); i++)
    {
        if(idx1 == sorted_a.size())
        {
            sorted_arr.push_back(sorted_b[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_b.size())
        {
            sorted_arr.push_back(sorted_a[idx1]);
            idx1++;
        }
        else if(sorted_a[idx1] < sorted_b[idx2])
        {
            sorted_arr.push_back(sorted_a[idx1]);
            idx1++;
        }
        else
        {
            sorted_arr.push_back(sorted_b[idx2]);
            idx2++;
        }
    }
    return sorted_arr;
}

void print_sorted(vector<int>arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

    vector<int> sorted_arr = merge_sort(arr);

    cout<<"After using merge sort:"<<endl;
    print_sorted(sorted_arr);

    return 0;
}