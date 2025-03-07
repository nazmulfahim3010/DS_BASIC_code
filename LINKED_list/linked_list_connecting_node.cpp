#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *link;

};
int main(){
    node *head;
    head=(node*)malloc(sizeof(node));

    head->data=45;
    head->link=NULL;

    node*current;
    current=(node*)malloc(sizeof(node));
    current->data=55;
    current->link=NULL;

    head->link=current;
    

}