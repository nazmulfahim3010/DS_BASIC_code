#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int item){
        data=item;
        next=NULL;
    }
};
class linked_list{
    private:
    Node*head;
    public:
    linked_list(){
        head=NULL;
    }
    void append(int item){
        Node*new_node=new Node(item);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node*temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }

    void print(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }


};
int main(){
    linked_list list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    list.print();

}