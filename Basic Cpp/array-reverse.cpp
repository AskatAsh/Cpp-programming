#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size){
    // int temp[size];
    // for(int i=0; i<size; i++){
    //     temp[i] = arr[size-i-1];
    // }
    // for(int i=0; i<size; i++){
    //     cout<<temp[i]<<" ";
    // }

    int start = 0;
    int end = size-1;
    while(start <= end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int numbers[8] = {1, 3, 17, 5, 9, 16, 15, 24};
    int size = 8;
    reverse(numbers, size);
}