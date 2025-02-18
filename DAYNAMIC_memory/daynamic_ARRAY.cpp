#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    int *ptr;
    cout<<"enter the size of your array: ";
    cin>>size;
    ptr=new int[size];
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"daynamic array output: \n";
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }


}