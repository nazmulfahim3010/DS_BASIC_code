#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int item){
        data=item;
        left=NULL;
        right=NULL;
    }

};

class binary_tree{
    private:
        Node*root;
    public:
    binary_tree(){
        root=NULL;
    }
        void add_on_left(int item){
            Node*new_node=new Node(item);
            Node*temp=root;

            if(root==NULL){
                root=new_node;
                return;
            }

            while(temp->left!=NULL){
                temp=temp->left;
            }
            temp->left=new_node;
        }

        void add_on_right(int item){
            Node*new_node=new Node(item);
            Node*temp=root;

            if(root==NULL){
                root=new_node;
                return;
            }

            while(temp->right!=NULL){
                temp=temp->right;
            }
            temp->right=new_node;
        }
};

int main(){
    binary_tree tree;
    tree.add_on_left(1);
    tree.add_on_left(2);
    tree.add_on_right(3);
    tree.add_on_right(4);
}