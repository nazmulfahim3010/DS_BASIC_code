#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,0,2,9,3,3,7,4,5,9};

    sort(v.begin(),v.end());
    int target;cin>>target;
    int index=0;
    bool is_found=false;

    int start=0,end=v.size()-1;

    while(start<=end){
        int mid=(start+end)/2;

        if(v[mid]==target){
            index=mid;
            start=mid+1;
            is_found=true;
        }
        else if(v[mid]<=target){
            index=mid;
        }
        

        if(v[mid]>target){
            end=mid-1;
        }
        else if(v[mid]<target){
            start=mid+1;

        }

    }

    if(is_found==true){
        cout<<v[index];
    }
    else{
        cout<<v[index+1];
    }



}