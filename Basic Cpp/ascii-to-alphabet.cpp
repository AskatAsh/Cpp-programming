#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "fajsonlslfepbjtsaayxbymeskptcumtwrmkkinjxnnucagfrg";
    int i=0;
    for(i;i<s.length();i++){
        if(s[i] == 'b'){
            cout<<i+1<<endl;
            break;
        }
    }
}
