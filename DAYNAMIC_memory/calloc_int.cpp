#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of integer:\n";
    cin>>n;

    int *ptr=(int*)calloc(n,sizeof(int));//n is the block of integer

    //if we use malloc the the syntax will
    //int *ptr=(int*)malloc(n*sizeof(int));

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++){
        cin>>*(ptr+i);

    }

    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }

}