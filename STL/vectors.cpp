#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.emplace_back(20);
    cout<<arr[0]<<" "<<arr[1]<<endl;

    vector<pair<int, int>> vec; // declaring pair in vector
    vec.push_back({20, 30});
    vec.emplace_back(40, 50); // curly braces can be omitted for pairs
    cout<<vec[0].first<<" "<<vec[1].second<<endl;

    vector<int> vec2(5, 100); // vector of size 5 with all elements 100
    print(vec2);

    vector<int> vec3(5, 20);
    vector<int> vec4(vec3); // copy of vector3 in vector4
    print(vec4);

    
}