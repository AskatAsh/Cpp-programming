#include<iostream>
using namespace std;

int binary_search(int array[], int value, int low, int high)
{
    if(low<=high){
        int mid = (low+high)/2;
        if(array[mid] == value) return mid;
        else if(value < array[mid]) binary_search(array, value, low, mid-1);
        else binary_search(array, value, mid+1, high);
    }
    else return -1;
}

int main(){
    int size, value;
    cout << "Enter array size: ";

    cin >> size;
    int array[size];

    cout << "Array input:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout<<"Enter value to search: ";
    cin>>value;

    int index;
    index = binary_search(array, value, 0, size-1);

    if(index >= 0){
        cout<<value<<" found at index "<<index<<" position "<<index+1<<endl;
    }else{
        cout<<value<<" not found in array!"<<endl;
    }

    // int mid, low = 0, high = size-1, flag = 0;

    // while(low <= high){
    //     mid = (low+high)/2;
    //     if(array[mid] == value){
    //         cout<<value<<" found at index "<<mid<<" position "<<mid+1<<endl;
    //         flag = 1;
    //         break;
    //     }
    //     else if(value < array[mid]){
    //         high = mid-1;
    //     }
    //     else{
    //         low = mid+1;
    //     }
    // }
    // if(flag == 0){
    //     cout<<value<<" not found in array!"<<endl;
    // }
}