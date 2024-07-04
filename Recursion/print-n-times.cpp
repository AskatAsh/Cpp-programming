#include<iostream>
using namespace std;

int count = 0;
void print(int n){
    if(count == n) return;

    cout<<count+1<<endl;
    count++;
    print(n);
}

int main()
{
    int n;
    cin>>n;
    int count = 0;
    print(n);
}