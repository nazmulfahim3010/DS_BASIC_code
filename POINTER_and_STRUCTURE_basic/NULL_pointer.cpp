#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int *ptr=NULL;
    cout<<ptr;*/

    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    
    if(ptr==NULL){
        cout<<"memory could not be allocated";
    }
    else{
        cout<<"memory allocated successfully";
    }

}