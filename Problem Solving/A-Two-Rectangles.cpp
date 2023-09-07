#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int area1,area2;
    area1 = a*b;
    area2 = c*d;
    if(area1==area2){
        cout<<area1<<endl;
    }
    else if(area1>area2){
        cout<<area1<<endl;
    }
    else{
        cout<<area2<<endl;
    }
}
