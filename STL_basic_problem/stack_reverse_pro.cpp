#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    string name;
    cin>>name;
    
    for(int i=0;i<name.size();i++){
        st.push(name[i]);
    }
    int n=st.size();
    cout<<n;

    cout<<"\n";
    /*while(!st.empty()){
        cout<<st.top();
        st.pop();
    }*/
   for(int i=0;i<n;i++){
    cout<<st.top();
    st.pop();
   }
}