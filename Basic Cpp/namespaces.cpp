#include<bits/stdc++.h>
using namespace std;
namespace one{
    void hello(){
        cout<<"Hello World..!"<<endl;
    }
}
namespace two{
    void hello(){
        cout<<"Hello, I'm Askat."<<endl;
    }
}
using namespace one;
using namespace two;
int main(){
    // one::hello();
    // two::hello();

    hello();

    return 0;
}