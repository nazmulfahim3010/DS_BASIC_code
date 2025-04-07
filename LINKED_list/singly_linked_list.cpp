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
        Node*head=NULL;
        int count;
    public:
        linked_list(){
            head=NULL;
            count=0;
        }

        void append(int item){
            Node*new_node= new Node(item);

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
            count++;
        }

        void print(){
            if(head==NULL){
                cout<<"this list is empty";
                return;
            }
            Node*temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"  ";
                temp=temp->next;
            }
        }

        int size(){
            return count;
        }

        void append_in_index(int index,int item){
            if(index>count){
                cout<<"you have "<<count<<" element";
                return;
            }
            int count_index=0;
            Node*temp=head;
            while(count_index!=index){
                count_index++;
                temp=temp->next;
            }

            Node*new_node=new Node(item);
            new_node->next=temp->next;
            temp->next=new_node;
            count++;
        }

        void del(){
            Node*temp=head;
            Node*prev;

            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;

            }
            free(temp);
            prev->next=NULL;
            count--;
        }
        int pre_append(int item){
            Node*new_node=new Node(item);

            new_node->next=head;
            head=new_node;
            count++;

        }
        void del_in_index(int index){
            int count_index=0;
            Node*temp=head;
            Node*prev=NULL;
            Node*up_next=NULL;
            while(count_index!=index){
                prev=temp;
                //up_next=temp->next->next;
                temp=temp->next;
                up_next=temp->next;
                count_index++;
            }
            count--;
            prev->next=up_next;
            //prev->next=temp->next;
            free(temp);
            
        }
};
int main(){
    linked_list list;
    list.append(20);
    list.append(30);
    list.append(40);
    list.append(410);
    list.pre_append(0);
    list.append_in_index(2,10);
    list.del_in_index(2);
    //list.del();
    
    cout<<"size: "<< list.size()<<endl;

    list.print();

}