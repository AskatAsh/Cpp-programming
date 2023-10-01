#include<bits/stdc++.h>
using namespace std;

void incrementDecrement1(){
    int a, b=1;
    a = 10;
    if(++a){
        cout<<b<<endl;
    }
    else{
        cout<<++b<<endl;
    }
}
void incrementDecrement2(){
    int a=1, b=2;
    
    if(a-- > 0 || ++b > 2){
        cout<<"inside if statement"<<endl;
    }
    else{
        cout<<"inside else statement"<<endl;
    }
    cout<<a<<" "<<b<<endl;
}
void incrementDecrement3(){
    int num = 3;
    
    cout<<(25 * (++num));
}
void incrementDecrement4(){
    int a=1, b = a++, c = ++a;

    cout<<b<<endl;;
    cout<<c;
}
int main(){
    // incrementDecrement1();
    // incrementDecrement2();
    // incrementDecrement3();
    incrementDecrement4();
}