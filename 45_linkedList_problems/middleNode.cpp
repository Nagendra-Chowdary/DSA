#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
Node(int d){
    this->data=d;
    this->next=NULL;
}

};
//you can just use count to find length and then find middle node
//if two middles return second middle
//Another approach
//one node jumps two nodes and one just one node in a loop
Node* midNode(Node* &head){
    if(head==NULL || head->next==NULL){
         return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
  Node* fast=head->next;
  Node* slow=head;
  
  while(fast!=NULL){

    fast=fast->next;
    if(fast!=NULL){
    fast=fast->next;
    }
    slow=slow->next;
  }
  return slow;
}

int main(){
Node* head=new Node(1);
Node* node2=new Node(7);
head->next=node2;
Node* node3=new Node(3);
node2->next=node3;
Node* node4=new Node(4);
node3->next=node4;
Node* node5=new Node(5);
node4->next=node5;

Node* mid=midNode(head);
cout<<mid->data<<endl;


}