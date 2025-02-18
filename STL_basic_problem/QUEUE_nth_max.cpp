#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int>pq;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    for(int i=0;i<n-1;i++){
        pq.pop();
    }
    cout<<pq.top();
}