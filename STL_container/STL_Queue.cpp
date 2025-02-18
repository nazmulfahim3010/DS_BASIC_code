#include<iostream>
#include<queue>
using namespace std;
int main(){
    int x;
    queue<int>var;
    /*var.push(1);///insert value
    var.push(5);
    cout<<var.front()<<endl;
    var.pop();///pop the element
    cout<<var.front();*/
    for(int i=0;i<5;i++){
        cin>>x;
        var.push(x);
    }
    /*for(int i=0;i<5;i++){//it give the same sequence in which sequence we enterd the data
        cout<<var.front();
        var.pop();
    }*/
   while(!var.empty()){//while(var.empty()==0){
    cout<<var.front()<<" ";
    var.pop();
   }
}
//this is a FIFO->first in first out;
//queue only use front to show their element;