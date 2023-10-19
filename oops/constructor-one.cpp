#include<bits/stdc++.h>
using namespace std;
class Example{
    public:
        int x;
        int y;
        int z;
        Example(int a, int b, int c){
            x = a;
            y = b;
            z = c;
        }
};
int main(){
    Example ex(10, 20, 30);
    ex.x = 10;
    cout<<ex.x<<" "<<ex.y<<" "<<ex.z<<endl;
}