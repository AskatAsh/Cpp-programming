#include<iostream>
#include<utility>
using namespace std;
// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main()
{
    int x,y;
    cin>>x>>y;
    // swap(&x, &y);
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}