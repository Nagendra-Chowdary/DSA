#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* next;
 Node(int data){
    this->data=data;
    this->next=NULL;
 }
};
void reverseLL(Node* &node){
    Node* temp=node;
    Node* prev=NULL;
    Node* p=NULL;
    while(temp!=NULL){
     p=temp->next;
     temp->next=prev;
     prev=temp;
     temp=p;


    }
    node=prev;
}
void print(Node* &node){
  Node* head=node;
  while(head!=NULL){
    cout<<head->data<<endl;
    head=head->next;
  }
}
int main(){
Node* node=new Node(9);
Node* node2=new Node(18);
node->next=node2;
Node* node3=new Node(48);
node2->next=node3;
Node* node4=new Node(10);
node3->next=node4;
Node* node5=new Node(910);
node4->next=node5;
reverseLL(node);
print(node);

}