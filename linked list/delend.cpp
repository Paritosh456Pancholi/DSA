#include <iostream>
#include <cmath>
using namespace std;
 
 struct Node
 {  int data;
    Node *next;
     Node (int x){
        data=x;
        next=NULL;
    }
    
 };
 void rprint(Node *head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    rprint(head->next);
 }
 Node *insertend(Node *head,int x){
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
 }
 Node *delend(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    else{Node*curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete(curr->next);
    curr->next=NULL;
    return head;
    }
 }

int main() {
    Node *head=NULL;
    head= insertend(head,30);
    head= insertend(head,20);
    head= insertend(head,10);
    rprint(head);
    cout<<endl;
    head=delend(head);
    rprint(head);
    return 0;
}