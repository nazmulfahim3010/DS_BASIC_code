#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    cin>>i>>j;
    int adj_mat[i][i]={0};
    
    for(int c=0;c<j;c++){
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;
        
    }
    cout<<"--> answer"<<endl;

    for(int f=0;f<i;f++){
        for(int k=0;k<i;k++){
            if(adj_mat[f][k]==1&&f<k){
                cout<<f<<" "<<k<<endl;
            }
             
        }///
        
    }
}