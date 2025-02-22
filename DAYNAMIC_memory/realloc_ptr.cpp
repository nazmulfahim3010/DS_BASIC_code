#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number of integer: ";
    cin>>n;

    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        cout<<"Memory not available!";
        exit(1);
    }
    cout<<"Enter the two number\n";

    for(i=0;i<n;i++){
        cin>>*(ptr+i);
    }


    ptr=(int*)realloc(ptr,2*n*sizeof(int));
    if(ptr==NULL){
        cout<<"Memory not available!";
        exit(1);
    }
        cout<<"Enter the extra number";

        for(i=n;i<2*n;i++){
            cin>>*(ptr+i);
        }
        
        for(i=0;i<2*n;i++){
            cout<<*(ptr+i)<<" ";
        }
}
