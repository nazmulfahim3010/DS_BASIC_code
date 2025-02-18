#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={1,4,5,6,7};
    int c[5]; 
    set<int>s;
    for(int i=0;i<5;i++){
        s.insert(a[i]);
    }
    int size1=s.size();
    
    int n=0;
    for(int i=0;i<s.size();i++){
        
        s.insert(b[i]);
        int size2=s.size();
        if(size1==size2){
            c[n]=b[i];
            n++;

        }
    }
    for(int i=0;i<n;i++){
            cout<<c[i]<<" ";
        }
}
    