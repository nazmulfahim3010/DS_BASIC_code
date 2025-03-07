#include<bits/stdc++.h>
using namespace std;
class qu{
    private:
        int topp;
        int tail;
        int count;
        int a[100];
    public:
        qu(){
            topp=0;
            tail=0;
            count=0;
        }
        void enqueue(int x){
            a[tail]=x;
            tail++;
            count++;    
        }
        void dqueue_from_front(){
            topp--;
        }
        


};
int main(){
    qu q;
    q.enqueue(1);q.enqueue(2);q.enqueue(3);q.enqueue(4);q.enqueue(5);
    q.dqueue_from_front();
}