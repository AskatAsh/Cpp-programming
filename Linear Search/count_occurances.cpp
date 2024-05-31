#include <iostream>
using namespace std;

int count_occurances(int arr[], int n, int value)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == value){
            count++;
        }
    }
    return count;
}

int main()
{
    int n, value;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Value to search: ";
    cin>>value;
    int count = count_occurances(arr, n, value);
    cout<<"Number of occurances: "<<count<<endl;
}