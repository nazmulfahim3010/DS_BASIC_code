#include<bits/stdc++.h>
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

class stackk{
    private:
        node*head;
        int count;
    public:
        stackk(){
            head=NULL;
            count=0;
        }

        void push(int item){
            node*new_node=new node(item);

            if(head==NULL){
                head=new_node;
                return;
            }
            node*temp=head;

            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new_node;
        }

        void print(){
            node*temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
        int top(){
            node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            return temp->data;
        }
        int pop(){
            node*temp=head,*temp_prev;
            while(temp->next!=NULL){
                temp_prev=temp;
                temp=temp->next;
            }

            temp_prev->next=NULL;

            free(temp);
        }

};
int main(){
    stackk st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<st.top()<<endl;
    st.pop();

    st.print();


}