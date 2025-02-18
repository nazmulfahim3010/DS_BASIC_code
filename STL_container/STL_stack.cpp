#include<iostream>
#include<stack>
using namespace std;
int main(){
    int x;
    stack<int>varriable;
    /*varriable.push(1);
    varriable.push(10);
    ////varriable.push(5);///pussing multiple varriable manually
    cout<<varriable.top()<<endl;
    ///varriable.pop();
    cout<<varriable.size()<<endl;

    cout<<varriable.empty()<<endl;*/
    /*for(int i=0;i<5;i++){
        cin>>x;
        varriable.push(x);
    }
    for(int i=0;i<5;i++){
        cout<<varriable.top();
        varriable.pop();///by this process we are using proper stack,,accessing data as proper stack
    }*/
   for(int i=0;i<5;i++){
    cin>>x;
    varriable.push(x);
   }
   while(varriable.empty()==0){///while(!varriable.empty()){
    cout<<varriable.top()<<" ";
    varriable.pop();
   }

}
///this is a LIFO -> last in first out
///stack only use top() function to show the output;