#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount,note,count;
    cin>>amount;
    cin>>note;

    switch(note){
        case 100:
            count = amount/note;
            cout<<count<<" notes of "<<note<<endl;
            break;
        case 50:
            count = amount/note;
            cout<<count<<" notes of "<<note<<endl;
            break;
        case 20:
            count = amount/note;
            cout<<count<<" notes of "<<note<<endl;
            break;
        case 10:
            count = amount/note;
            cout<<count<<" notes of "<<note<<endl;
            break;
        case 5:
            count = amount/note;
            cout<<count<<" notes of "<<note<<endl;
            break;
        case 1:
            count = amount/note;
            cout<<count<<" notes of "<<note<<endl;
            break;
    }
}