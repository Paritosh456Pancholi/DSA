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
 Node *insertbegin(Node *head,int x){
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
 }

int main() {
    Node *head=NULL;
    head= insertbegin(head,30);
    head= insertbegin(head,20);
    head= insertbegin(head,10);
    rprint(head);
    return 0;
}