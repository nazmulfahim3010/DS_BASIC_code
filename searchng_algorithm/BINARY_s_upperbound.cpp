#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,0,2,9,3,8,4,4,7,5};
    sort(v.begin(),v.end()); 
    int n;
    cin>>n;
    int start=0,end=v.size()-1;
    int index=-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(v[mid]==n){
            index=mid;
            start=mid+1;
             
        }
        
        

        if(v[mid]<n){
            start=mid+1;
        }
        else if(v[mid]>n){
            end=mid-1;
        }

        

    }
    
    cout<<v[index+1]<<endl;



}