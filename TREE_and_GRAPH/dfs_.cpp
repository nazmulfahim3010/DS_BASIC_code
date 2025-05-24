#include<bits/stdc++.h>
using namespace std;
int node,edge;
const int mx=100;
vector<int>adj[mx];
bool visited[mx]={false};

void DFS(int src){
    if(visited[src]==false){
        visited[src]=true;
        cout<<src;
    }

    for(auto item:adj[src]){
        DFS(item);
    }

}
int main(){
    cin>>node>>edge;
    int count=0;
    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int n=0;n<node;n++){
        if(visited[n]==false){
            count++;
            DFS(n);
        }
    }
    

}
