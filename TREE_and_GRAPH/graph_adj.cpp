#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    cin>>i>>j;
    int adj_mat[i][j];
    for(int c=0;c<i;c++){
        for(int v=0;v<j;v++){
            adj_mat[c][v]=0;
        }
    }
    for(int c=0;c<j;c++){
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;
        
    }
    cout<<"--> answer"<<endl;

    for(int f=0;f<i;f++){
        for(int k=0;k<j;k++){
            if(adj_mat[f][k]==1){
                cout<<f<<" "<<k<<endl;
            }
             
        }
    }
}