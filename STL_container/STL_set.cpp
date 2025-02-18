#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    int a[5]={1,10,2,11,3};
    /*s.insert(14);
    s.insert(2);
    s.insert(0);
    for(int item:s){
        cout<<item<<" ";
    }
    cout<<"->"<<s.size();
    cout<<"\n";
    cout<<s.erase(0);
    for(int item:s){
        cout<<item<<" ";
    }
    cout<<"->"<<s.size();*/
    for(int i=0;i<5;i++){
        s.insert(a[i]);
    }
    for(int item:s){
        cout<<item<<" ";//it sorted those element who were not sorted properly
    }

}