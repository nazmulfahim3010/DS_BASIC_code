#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,e;
   cin>>n>>e;
   vector<int>adj_mat[n];

   for(int i=0;i<e;i++){
    int a,b;
    cin>>a>>b;
    adj_mat[a].push_back(b);
    adj_mat[b].push_back(a);
   }

   cout<<"->>answer"<<endl;
   

   for(int i=0;i<n;i++){
    for(int j=0;j<adj_mat[i].size();j++){
        cout<<adj_mat[i][j]<<" ";
    }
    cout<<endl;
   }
}


// 5
// 5
// 0 2
// 0 3
// 2 3
// 2 1
// 3 4
// ->>answer2 3 
// 2
// 0 3 1
// 0 2 4
// 3