#include<iostream>
using namespace std;
class Example{
    public:
    int x;
    Example(int a): x(a){};
    // Example operator +(Example obj){
    //     // cout<<x+obj.x<<endl;
    //     // return x;
    //     // Example ans(0);
    //     // ans.x = x + obj.x;
    //     // return ans;
    // }
    int operator +(Example obj){
        return x+obj.x;
    }
};

int main(){
    Example a(10), b(20), c(30);
    // a+b;
    int ans = a+b;
    Example ansObj(ans);
    cout<<ansObj+c<<endl;
    return 0;
}