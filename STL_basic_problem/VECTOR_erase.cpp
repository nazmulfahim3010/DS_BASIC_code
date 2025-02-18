#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    vector<int>v;
    for(int i=0;i<5;i++){
        v.push_back(arr[i]);
    }

    v.erase(v.begin()+0);
    for(auto p:v){
        cout<<p<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1);
    for(auto p:v){
        cout<<p<<" ";
    }
    cout<<endl;
    v.push_back(1);v.push_back(10);v.push_back(100);v.push_back(1000);

    v.erase(v.begin()+1,v.end()-3);
    for(auto p:v){
        cout<<p<<" ";
    }


}