#include <bits/stdc++.h>
using namespace std;

// complexity O(n)
class Array
{
private:
    int *arr;
    int cap;
    int size;
    // complexity O(nlogn)
    void increase_size()
    {
        cap = cap * 2;
        int *newArray = new int[cap];
        for (int i = 0; i < size; i++)
        {
            newArray[i] = arr[i];
        }
        delete[] arr;
        arr = newArray;
    }
    void decrease_size(){
        cap = cap / 2;
        int *newArray = new int[cap];
        for(int i=0; i < size; i++)
        {
            newArray[i] = arr[i];
        }
        delete[] arr;
        arr = newArray;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        size = 0;
    }
    // complexity O(1)
    void push_value(int value)
    {
        if (cap == size)
        {
            increase_size();
        }
        arr[size] = value;
        size++;
    }
    // complexity O(size)
    void insert(int value, int pos)
    {
        if (cap == size)
        {
            increase_size();
        }
        for (int i = size - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = value;
        size++;
    }
    // complexity O(size)
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    // complexity O(1)
    int getSize()
    {
        return size;
    }
    // complexity O(1)
    int getElement(int index)
    {
        if (index >= size)
        {
            cout << "Error! " << index << " is out of bounds.\n";
            return -1;
        }
        return arr[index];
    }
    // complexity O(1)
    void pop_value(){
        if(size == 0){
            cout<<"Current size is 0.\n";
            return;
        }
        size--;
        if(size == cap/2){
            decrease_size();
        }
    }
    // complexity O(size)
    void delete_value(int pos)
    {
        if(pos>=size){
            cout << "Error! Position " << pos << " doesn't exist.\n";
            return;
        }
        for(int i=pos; i<size; i++){
            arr[i] = arr[i+1];
        }
        size--;
        if(size == cap/2){
            decrease_size();
        }
    }
};

int main()
{
    Array arr;
    arr.push_value(10);
    arr.push_value(20);
    arr.push_value(30);
    arr.push_value(40);
    arr.push_value(50);
    arr.push_value(60);
    arr.push_value(70);
    arr.push_value(80);

    // insert(value, position)
    arr.insert(25, 2);

    arr.print();

    // int arraySize = arr.getSize();
    // cout << "Current size of the array is: " << arraySize << endl;

    // int idx = 2;
    // int element = arr.getElement(idx);
    // if (element != -1)
    // {
    //     cout << "Current element in index " << idx << " is: " << element << endl;
    // }

    arr.pop_value();
    arr.print();
    arr.pop_value();
    arr.print();
    arr.delete_value(2);
    arr.print();
    arr.delete_value(4);
    arr.print();

    return 0;
}