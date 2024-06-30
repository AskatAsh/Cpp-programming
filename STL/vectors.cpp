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

    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    it+=2;
    cout<<*(it)<<endl;
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    vector<int> v2(v);
    vector<int>::iterator it2 = v2.end()-1; // v2.end() == v2.size()
    cout<<*(it2)<<endl;

    vector<int> v3(v2);
    for(auto it = v3.rbegin(); it != v3.rend(); it++){
        cout<<*it<<" "; // access elements in reverse order
    }cout<<endl;

    cout<<v3.back()<<endl; // access the last element

    for(auto it : v){ // for each loop
        cout<<it<<" ";
    }cout<<endl;

    v.erase(v.begin()+1);
    print(v);

    v.erase(v.begin(), v.begin()+3); // (start, end)
    print(v);

    vector<int> nums(2, 100);
    nums.insert(nums.begin(), 300);
    print(nums);
    nums.insert(nums.begin()+1, 2, 200);
    print(nums);

    vector<int> copy(2, 50);
    nums.insert(nums.begin(), copy.begin(), copy.end());
    print(nums);

    cout<<nums.size()<<endl; // size of the array

    nums.pop_back(); // pops out the last element
    print(nums);

    v.swap(nums); // v becomes nums and nums become v;
    print(v);

    v.clear(); // erases the entire vector

    cout<<v.empty()<<endl; // returns true or 1 if vector is empty
}