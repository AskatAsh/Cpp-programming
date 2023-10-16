#include<bits/stdc++.h>
using namespace std;

void reverseTheArray(int *arr, int size, int m)
{
    int start = m+1;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[9] = {10, 4, 5, 2, 3, 6, 1, 3, 6};
    int size = 9;
    int m = 3;
    reverseTheArray(arr, size, m);
}
// 10 4 5 2 6 3 1 6 3 