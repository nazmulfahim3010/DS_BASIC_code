#include<bits/stdc++.h>
using namespace std;
void linear_search(int a[],int n,int target){
    for(int i=0;i<n;i++){
        if(a[i]==target){
            cout<<"number found";
            return;
        }
    }
    cout<<"not found";

}
int main(){
    int n=10,target;
    int a[n]={0,1,2,4,6,4,5,7,8,9,3};
    cout<<"target number:";
    cin>>target;
    linear_search(a,n,target);
}