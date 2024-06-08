#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> primes;
    vector<bool> visited(n+1);

    // time complexity O(nlogn)
    for(int i=2; i<n; i++) // time complexity O(n)
    {
        if(!visited[i])
        {
            primes.push_back(i);
            for(int j=2; j*i<=n; j++) // time complexity O(logn)
            {
                visited[j*i] = true;
            }
        }
    }

    cout<<"Total Prime Numbers: "<<primes.size()<<endl;
    for(int i=0; i<primes.size(); i++)
    {
        cout<<primes[i]<<" ";
    }
    cout<<endl;
}