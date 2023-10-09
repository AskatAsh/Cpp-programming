#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"You choose option 1"<<endl;
                break;
            case 2:
                cout<<"You choose option 2"<<endl;
                break;
            case 3:
                cout<<"You choose option 3. exit program"<<endl;
                // return 0;
                exit(0);
            default:
                cout<<"Invalid choice. Try again"<<endl;
        }
        
    }
}