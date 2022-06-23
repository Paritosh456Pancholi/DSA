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
 void recursiveprintlist(Node* head)
 {
    if(head==NULL)
        return;
    cout<<(head->data)<<" ";
    recursiveprintlist(head->next);
    }

int main() {
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    recursiveprintlist(head);
    return 0;
}
