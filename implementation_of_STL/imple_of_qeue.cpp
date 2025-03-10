#include<iostream>
using namespace std;
class queue{
    private:
        int head,tail,count;
        int arr[100];
    public:
        queue(){
            head=0;
            tail=0;
            count=0;
        }

        void push(int num){
            arr[head]=num;
            head++;
            count++;

        }

        void pop(){
            tail++;
            count--;

        }

        void print(){
            if(head>=tail){
                for(int i=tail;i<head;i++){
                    cout<<arr[i]<<" ";
                }
            }
            else{
                cout<<"your queue is empty";
            }
        }

        void front(){
            cout<<arr[tail]<<endl;
            
        }
};
int main(){
    queue q;
    q.push(10);
    q.push(120);
    q.push(20);
    q.push(30);
    q.push(40);


    q.pop();

    q.print();
    cout<<endl;
    
    q.front();

}