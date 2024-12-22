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
Node* reverseLL(Node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* next=NULL;
    Node* prev=NULL;
    Node* curr=head;
    int c=0;
    while(c<k && curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        c++;
    }
    if(curr!=NULL){
        Node* r=reverseLL(curr,k);
    head->next=r;
    }
    return prev;

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
Node* rnode=reverseLL(node,3);
print(rnode);

}