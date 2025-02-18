#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>s;
    for(int i=0;i<5;i++){
        int x;cin>>x;
        s.push_back(x);
    }


    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}