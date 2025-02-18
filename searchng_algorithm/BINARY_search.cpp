#include<bits/stdc++.h>
using namespace std;
int main(){
    bool is_found=false;
    int n=10;
    int a[n]={0,1,2,3,4,5,6,7,8,9};

    int start=0,end=n-1;

    int target;
    cin>>target;

    while(start<=end){
        int mid=(start+end)/2;

        if(target==a[mid]){
            cout<<"Found";
            is_found=true;
            break;
        }

        if(a[mid]<target){
            start=mid+1;
        }
        else if(a[mid]>target){
            end=mid-1;
        }
    }

    if(is_found==false){
        cout<<"Not found";
    }
}