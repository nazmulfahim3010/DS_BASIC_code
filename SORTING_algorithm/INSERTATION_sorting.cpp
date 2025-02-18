#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,j;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    for(int i=1;i<n;i++)
    {
        int current =v[i];
        for(j=i-1;j>=0 && v[j]>current;j--)
        {
            v[j+1]=v[j];
        }
        v[j+1]=current;
    }
    for(int num : v)
    {
        cout<<num<<" ";
    }

    return 0;
}