#include<bits/stdc++.h>
using namespace std;
const int m=100;
int node,edge;
vector<int>graph[m];
int found[m]={0};
int output[m]={0};

void bfs(int src){
    queue<int>look;
    int node_value;
    found[src]=1;
    look.push(src);
    while(!look.empty()){
        node_value=look.front();
        look.pop();
        cout<<node_value<<" ";
        for(auto item:graph[node_value]){
            if(found[item]==0){
                found[item]=1;
                look.push(item);
            }
    
        }
        
    }

    

}

int main(){
    int src;
    cout<<"enter node ";
    cin>>node;
    cout<<"enter edge";
    cin>>edge;
    cout<<"source ";
    cin>>src;

    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(src);
    


}