#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    
    /*while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";*/

    for(int i=0;i<5;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}