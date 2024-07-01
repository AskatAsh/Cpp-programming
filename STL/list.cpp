#include<iostream>
#include<list>
using namespace std;

void print(list<int> &ls){
    for(const int &item : ls)
    {
        cout<<item<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> ls;
    ls.push_back(2);
    cout<<ls.front()<<endl;

    ls.emplace_back(4);
    cout<<ls.back()<<endl;

    ls.push_front(6);
    ls.insert(ls.end(), 8);

    print(ls);

    ls.pop_front(); // remove first element
    print(ls);

    ls.pop_back(); // remove last element
    print(ls);

    ls.erase(ls.begin());
    print(ls);
}