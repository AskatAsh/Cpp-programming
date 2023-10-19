#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int Id;
        void sayName(){
            cout<<"I am Askat "<<Id<<endl;
        }
};
int main(){
    Student one;
    one.Id = 67;
    one.sayName();
}