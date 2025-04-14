#include<bits/stdc++.h>
using namespace std;
int target;
    const int n=10;

    int arr[n]={1,2,3,4,5,6,7,8,9,10};

void binary_s(int start,int end,int mid){

    mid=(start+end)/2;
    
    if(arr[mid]==target){
        cout<<"found";
        return;
    }

    if(arr[mid]>target){
        end=mid-1;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }

    if(start>end){
        cout<<"not found";
        return;
    }
    else{
        binary_s(start,end,mid);
    }

}
int main(){
    cin>>target;
    int start=0,end=n-1;
    int mid=0;

    binary_s(start,end,mid);
}