#include<bits/stdc++.h>
using namespace std;
struct self{
    int x;
    char a;
    self *ptr;
};
int main(){
    self v1,v2;
    cin>>v1.x>>v1.a;
    v1.ptr=&v2;

    cin>>v2.x>>v2.a;
    v2.ptr=NULL;

    cout<<v1.x<<"\n"<<v1.ptr->x<<"\n"<<v1.ptr->a;

}