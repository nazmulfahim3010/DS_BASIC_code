#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    map<int,string>m;
    for(int i=0;i<5;i++){
        int roll;string name;
        cin>>p.first>>p.second;
        m.insert({p.first,p.second});
    }

    for(auto item:m){
        cout<<item.first<<" "<<item.second<<endl;

    }
}