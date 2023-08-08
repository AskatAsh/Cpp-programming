#include<bits/stdc++.h>
using namespace std;
namespace one{
    int a = 24;
    void hello(){
        cout<<"Hello World..!"<<endl;
    }
}
namespace two{
    int b = 36;
    void hello2(){
        cout<<"Hello, I'm Askat."<<endl;
    }
}
using namespace one;
using namespace two;
int main(){
    // one::hello();
    // two::hello();

    hello();
    hello2();
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"a+b = "<<a+b<<endl;

    return 0;
}