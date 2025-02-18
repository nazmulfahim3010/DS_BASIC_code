#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,6,7};
    set<int>s;
    for(int i=0;i<5;i++){
        s.insert(a[i]);
        s.insert(b[i]);
    }

    for(int item :s){
        cout<<item<<" ";
    }

}