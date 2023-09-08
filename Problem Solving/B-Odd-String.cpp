#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //cout<<s.length();
    //string newString = "";
    for(int i=0;i<s.length();i+=2)
    {
        //newString = newString + s[i];
        cout<<s[i];
    }
    //cout<<newString<<endl;
    /*
    char ch[100000];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i+=2)
    {
        cout<<ch[i];
    }*/
}
