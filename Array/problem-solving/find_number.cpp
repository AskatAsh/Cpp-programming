#include<iostream>
using namespace std;

void find_number(int array[], int size, int value)
{
    int count = 0;
    int found_nums[size];
    for(int i=0; i<size; i++)
    {
        if(array[i] == value){
            found_nums[count] = i;
            count++;
        }
    }
    if(count != 0){
        cout<<"FOUND at index position: ";
        for(int i=0; i<count-1; i++){
            cout<<found_nums[i]<<", ";
        }
        cout<<found_nums[count-1]<<endl;
    }
    else cout<<"NOT FOUND"<<endl;
}

int main(){
    int size, value;

    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cin>>value;
    find_number(array, size, value);
}