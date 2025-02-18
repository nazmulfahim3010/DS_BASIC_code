#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    deque<int>dq;
    /*dq.push_back(1);
    dq.push_front(3);
    dq.push_front(2);
    dq.emplace_back(4);*/
    for(int i=0;i<2;i++){
        dq.push_front(arr[i]);
    }
    for(int i=2;i<5;i++){
        dq.push_back(arr[i]);
    }
    for(auto p:dq){
        cout<<p<<" ";
    }

}