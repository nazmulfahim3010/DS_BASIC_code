#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    } 

    for(int i=0;i<n-1;i++){
        bool is_sort=false;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j+1],v[j]);
                is_sort=true;
            }
            
        }
        if(is_sort==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}