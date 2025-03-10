#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;

    Node(int item){
        data=item;
        next=NULL;
        prev=NULL;
        
    }
};
class linked_list{
    private:
    Node*head;
    Node*tail;
    int count;
    public:
    linked_list(){
        head=NULL;
        tail=NULL;
        count=0;
    }
    void push_back(int item){
        Node*new_node=new Node(item);
        if(head==NULL){
            head=new_node;
            count++;
            return;
        }

        Node*temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev=temp;
        count++;
    }

    void print_from_top(){
        if(head==NULL){
            cout<<"list is empty";
            return;
        }
        Node*temp=head;

        while(temp!=NULL){

            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }

    void print_from_back(){
        if(head==NULL){
            cout<<"list is empty";
            return;
        }

        Node*temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
        }

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
    }
    int size(){
        return count;
    }

    void push_front(int item){
        Node*new_node=new Node(item);

        if(head==NULL){
            push_back(item); 
            return;
        }

        head->prev=new_node;
        new_node->next=head;
        head=new_node;
        count++;


    }

    void deletion(int index){

        int current_index=0;
        Node*temp=head;
        Node*temp_prev;

        while(current_index!=index){
            temp_prev=temp;
            temp=temp->next;
            current_index++;

        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        count--;
        free(temp);
        


    }
    void insertion(int index,int item){
        int current_index=0;
        Node*temp=head;
        Node*new_node=new Node(item);

        while(current_index!=index){
            temp=temp->next;
            current_index++;
            

        }
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next->prev=new_node;
        

        count++;

    }
};
int main(){
    linked_list list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(50);
    list.push_back(40);
    list.push_front(242);
    list.push_front(134);



    list.deletion(2);
    list.insertion(2,10);

    cout<<list.size()<<endl;

    list.print_from_top();
    list.print_from_back();

    
}