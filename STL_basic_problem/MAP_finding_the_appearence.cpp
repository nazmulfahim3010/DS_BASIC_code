#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    map<int,int>m;

    for(auto item:v){
        m[item]++;
        
    }
    for(auto item1:m){
        cout<<item1.first<<" occures "<<item1.second<<endl ;
    }
 }