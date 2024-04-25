#include<iostream>
using namespace std;

class Parent{
    private:
    int taka;
    protected:
    int password;
    public:
    Parent(int tk, int pass): taka(tk), password(pass){};
    // friend class MyFriend;
    friend void myFriend(Parent *ptr);
};

// class MyFriend{
//     public:
//     void tellSecret(Parent *ptr){
//         cout<<"Taka: "<<ptr->taka<<endl;
//         cout<<"Password: "<<ptr->password<<endl;
//     }
// };

void myFriend(Parent *ptr){
    cout<<"Taka: "<<ptr->taka<<endl;
    cout<<"Password: "<<ptr->password<<endl;
}

int main(){
    Parent pt(5000, 1234);
    // MyFriend fr;
    // fr.tellSecret(&pt);
    myFriend(&pt);
}