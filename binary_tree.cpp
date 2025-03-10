#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int item){
        data=item;
        left=NULL;
        right=NULL;
    }
};
class binary_tree{
    private:
    node*root;
    
    public:
    binary_tree(){
        root=NULL;
    }
    node* create_node(int num){
        node*new_node=new node(num);
        return new_node;

    }
    void add_left(node*parent,node*child){
        parent->left=child;
    }
    void add_right(node*parent,node*child){
        parent->right=child;
    }

    void pre_order(node*root){
        if(root==NULL){
            return;
        }

        cout<<root->data<<" ";
        pre_order(root->left);
        pre_order(root->right);
        
    }

    void in_order(node*root){
        if(root==NULL){
            return;
        }

        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
    }

    void post_order(node*root){
        if(root==NULL){
            return;
        }

        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
    }



};
int main(){
    binary_tree tree;
    node*root=tree.create_node(1);
    node*one=tree.create_node(2);
    node*two=tree.create_node(3);
    node*three=tree.create_node(4);
    node*four=tree.create_node(5);
    node*five=tree.create_node(6);

    tree.add_left(root,one);
    tree.add_right(root,two);
    tree.add_left(one,three);
    tree.add_right(one,four);
    tree.add_left(two,five);

    cout<<"Pre-order : ";
    tree.pre_order(root);
    cout<<endl;
    cout<<"In-order : ";
    tree.in_order(root);
    cout<<endl;
    cout<<"post-order : ";
    tree.post_order(root);


}