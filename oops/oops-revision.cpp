#include <bits/stdc++.h>
using namespace std;

class Example{
    private:
        int x;
        int pass;
    public:
        Example(int pw){
            pass = pw;
        }
        void setter(int a, int p){
            if(pass == p){
                x = a;
            }
            else{
                cout<<"Password didn't match"<<endl; 
            }
        }
        int getter(int p){
            if(pass == p){
                return x;
            }
            else{
                return -1;
            }
        }
};
int main()
{
    Example ex(1234);
    ex.setter(890, 1235);
    cout<<ex.getter(1234)<<endl;
}