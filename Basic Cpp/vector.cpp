// stl = standard template library --> vector
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> x;
    for(int i=1; i<=10; i++)
    {
        cout<<"Before push_back size: "<<x.size()<<endl;
        x.push_back(i);
        cout<<"After push_back size: "<<x.size()<<endl;
    }
    x.insert(x.begin()+1, 11);
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }cout<<endl;

    x.erase(x.begin()+5);
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }cout<<endl;

    x.pop_back();
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }cout<<endl;

    x.resize(5);
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }cout<<endl;
}