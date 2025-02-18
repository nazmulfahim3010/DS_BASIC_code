#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int target;
    cout<<"target "<<endl;
    cin>>target;
    int index=-1;

    int start =0,end=v.size()-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(v[mid]==target){
            index=mid;
            end=mid-1;
        
        }

        if(v[mid]<target){
            start=mid+1;
        }
        else if(v[mid]>target){
            end=mid-1;
        }

    }

    cout<<"the index is -> "<<index;

}