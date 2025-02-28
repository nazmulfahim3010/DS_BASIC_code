#include<bits/stdc++.h>
using namespace std;
class st{
    private:
        int topp;
        int a[100];
        int count;
    public:
        st(){
            topp=0;
            count=0;
        }
        void push(int x){
            topp++;
            a[topp]=x;
            count++;
        }
        int top(){
            int z=a[topp];
            
            return z;
        }
        int pop(){
            count--;
            topp--;
            
        }
        string empty(){
            if(count==0){
                return "empty";
            }
            else{
                return "not empty";
            }
        }
        void print(){
            for(int i=count;i>0;i--){
                cout<<a[i]<<" ";
            }

        }
        int size(){
            return count;
        }



};
int main(){
    st stk;
    int x;
    //cin>>x;
    stk.push(1);stk.push(3);stk.push(2);stk.push(5);
    
    stk.pop();
    cout<<stk.empty()<<endl;
    stk.print();
    cout<<endl;
    cout<<stk.size()<<endl ;

    cout<<stk.top()<<endl;

}