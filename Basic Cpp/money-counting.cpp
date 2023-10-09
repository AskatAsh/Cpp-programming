#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount,note,count;
    cin>>amount;
    // cin>>note;

    switch(100){
        case 100:
            count = amount/100;
            cout<<count<<" notes of 100 = "<<count*100<<endl;
            amount = amount%100;
            // break;
        case 50:
            count = amount/50;
            cout<<count<<" notes of 50 = "<<count*50<<endl;
            amount = amount%50;
            // break;
        case 20:
            count = amount/20;
            cout<<count<<" notes of 20 = "<<count*20<<endl;
            amount = amount%20;
            // break;
        case 10:
            count = amount/10;
            cout<<count<<" notes of 10 = "<<count*10<<endl;
            amount = amount%10;
            // break;
        case 5:
            count = amount/5;
            cout<<count<<" notes of 5 = "<<count*5<<endl;
            amount = amount%5;
            // break;
        case 2:
            count = amount/2;
            cout<<count<<" notes of 2 = "<<count*2<<endl;
            amount = amount%1;
            // break;
        case 1:
            count = amount/1;
            cout<<count<<" notes of 1 = "<<count*1<<endl;
            amount = amount%1;
            // break;
    }
}