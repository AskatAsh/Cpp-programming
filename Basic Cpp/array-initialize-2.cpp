#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int value = 5;
    // initialize an array with certain value
    fill(arr, arr+100, value);

    // print the elements of the array
    for(int i=0;i<100;i++){
        cout<<arr[i]<<" ";
    }
}