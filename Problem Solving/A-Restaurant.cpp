#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int total = n*800;
    if(n>=15){
        int times = n/15;

        int sub = total - (times*200);
        cout<<sub<<endl;
    }
    else{
        cout<<total<<endl;
    }
}
