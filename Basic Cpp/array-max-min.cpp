#include<bits/stdc++.h>
using namespace std;

int max(int arr[], int size){
    int maxNum = INT_MIN;
    for(int i=0;i<size;i++){
        maxNum = max(maxNum, arr[i]);
        // if(arr[i]>max){
        //     max = arr[i];
        // }
    }
    return maxNum;
}
int min(int arr[], int size){
    int minNum = INT_MAX;
    for(int i=0;i<size;i++){
        minNum = min(minNum, arr[i]);
        // if(arr[i] < min){
        //     min = arr[i];
        // }
    }
    return minNum;
}
int main(){
    int numbers[5] = {12, 7, 3, 9, 23};
    int maxInArray = max(numbers, 5);
    int minInArray = min(numbers, 5);
    cout<<"Max value in array is : "<<maxInArray<<endl;
    cout<<"Min value in array is : "<<minInArray<<endl;
}