#include<bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cout<<"enter n: ";
    cin>>n;

    n=toupper(n);
    
    for(int i='A';i<=n;i++){
        for(int j='A';j<=n;j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }
}