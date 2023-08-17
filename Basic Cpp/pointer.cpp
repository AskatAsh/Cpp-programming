#include<iostream>
using namespace std;

void pointer1(int *x){
    *x = 234;
}
void pointer2(int **y){
    **y = 986;
}
int main(){
    int a = 12;
    int *ptr = &a;
    pointer1(ptr);
    cout<<a<<endl;
    int **ptr2 = &ptr;
    pointer2(ptr2);
    cout<<a<<endl;
}