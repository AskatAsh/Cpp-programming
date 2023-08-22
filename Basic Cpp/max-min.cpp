#include<iostream>
#include<algorithm>
using namespace std;
// int my_max(int a,int b){
//     if(a>b) return a;
//     else return b;
// }
// int my_min(int a,int b){
//     if(a<b) return a;
//     else return b;
// }
int main()
{
    int x,y;
    cin>>x>>y;
    // int max = my_max(x,y);
    int maximum = max(x,y);
    cout<<"Max is : "<<maximum<<endl;
    int minimum = min(x,y);
    cout<<"Min is : "<<minimum<<endl;
}