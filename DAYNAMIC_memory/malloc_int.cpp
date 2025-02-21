#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number of integer: ";
    cin>>n;

    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        cout<<"memory not avaiable";
        exit(1);
    }
    for(i=0;i<n;i++){
        cout<<"Enter an integer :";
        cin>>*(ptr+i);

    }
    for(i=0;i<n;i++){
        cout<<*(ptr+i)<<"  ";
    }
}