#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
    node(int item){
        data=item;
        next=NULL;
        prev=NULL;
    }
};

class queue{
    private:
        node*head;
        int count;
    public:
        queue(){
            head=NULL;
            count=0;
        }
        void enqueue(int item){
            node*new_node=new node(item);
            if (head==NULL){
                head=new_node;
                count++;
                return;
            }

            node*temp=head;

            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
            new_node->prev=temp;

        }

        void print(){
            if(head==NULL){
                return;
            }
            node*temp=head;

            while(temp!=nullptr){
                cout<<temp->data<<" ";
                temp=temp->next;

            }
        }

        void dequeue(){
            if(head=nullptr){
                return;
            }

            node*temp=head;

            head->next->prev=head;
            head=temp->next;
            free(temp);
            count--;
        }

        int size(){
            return count;
        }


};
int  main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    cout<<q.size()<<endl;;

    q.dequeue();

    q.print();

}
