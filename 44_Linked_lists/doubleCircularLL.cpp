#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert(Node* &node,int ele,int d){
      Node* newNode=new Node(d);
    if(node==NULL){
    newNode->prev=newNode;
    newNode->next=newNode;
    node=newNode;
    return;
    }
      Node* temp=node;
      while(temp->data!=ele){
        temp=temp->next;
      }
      newNode->prev=temp;
      newNode->next=temp->next;
      temp->next=newNode;


}
void print(Node* &node){
    Node* temp=node;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }while(temp!=node);
}

void deleteNode(Node* &node,int ele){
if(node==NULL){
    return;
}
    Node* prev=node->prev;
    Node* curr=node;
    Node* next=node->next;
    while(next->data!=ele){
        next=next->next;
        curr=curr->next;
        prev=prev->next;
    }
    if(node==next){
        node=curr;
    }
    curr->next=next->next;
    next->next->prev=next->prev;
    next->prev=NULL;
    next->next=NULL;
    delete next;
}
int main(){
Node* node=NULL;
insert(node,9,9);
insert(node,9,90);
insert(node,90,91);
// cout<<node->next->next->next->data<<endl;
print(node);
deleteNode(node,91);
print(node);
}