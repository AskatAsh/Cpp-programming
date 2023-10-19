#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[10];
        int Id;
};
int main(){
    Student std;
    strcpy(std.name, "Abdul Askat");
    std.Id = 32067;
    cout<<std.name<<" "<<std.Id<<endl;
}