#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size){
    int first = 0;
    int second = 1;
    while(first < size && second < size){
        swap(arr[first], arr[second]);
        first += 2;
        second += 2;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int numbers[9] = {1, 3, 17, 5, 9, 16, 15, 24, 30};
    int size = 9;
    swapAlternate(numbers, size);
}