#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    vector<int>var;
    /*var.push_back(10);
    var.push_back(1);
    cout<<var.front()<<" ";
    cout<<var.back()<<" ";
    cout<<var.empty();*/

    for(int i=0;i<5;i++){
        cin>>x;
        var.push_back(x);
    }
    /*for(int item:var){
        cout<<item;
    }*/
    for(int i=0;i<5;i++){
        cout<<var[i]<<" ";
    }
     

}