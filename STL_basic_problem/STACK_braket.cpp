#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;

    stack<char>st;

    for(int i=0;i<name.size();i++){
        if(name[i]=='{'){
            st.push(name[i]);
        }
        else if(name[i]=='}'){
            if(st.empty()||st.top()!='{'){
                cout<<"not okay";
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"okay";
    }
    else{
        cout<<"not okay";
    }
}