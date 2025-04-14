#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1={1,2,2,1,3,4,5,6};
    vector<int>v2(100);

    for(int i=0;i<v1.size();i++){
        v2[v1[i]]++;
    }
    for(int i=0;i<v2.size();i++){
        if(v2[i]!=0){
            cout<<i<<"->"<<v2[i]<<endl;
        }
    }


}