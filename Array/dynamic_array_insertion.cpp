#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
        int *arr;
        int cap;
        int size;
        void increase_size(){
            cap = cap * 2;
            int *newArray = new int[cap];
            for(int i=0; i<size; i++){
                newArray[i] = arr[i];
            }
            delete[] arr;
            arr = newArray;
        }
    public:
    Array(){
        arr = new int[1];
        cap = 1;
        size = 0;
    }
    void insert(int value){
        if(cap == size){
            increase_size();
        }
        arr[size] = value;
        size++;
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    Array arr;
    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);
    arr.insert(50);

    arr.print();

    return 0;
}