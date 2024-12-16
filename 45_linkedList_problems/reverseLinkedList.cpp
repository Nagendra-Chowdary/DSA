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
    Node* p;
    while(temp!=NULL){
     p=temp->next;
    cout<<prev->data<<endl;
    cout<<temp->data<<endl;
    cout<<p->data<<endl;
     temp->next=prev;
     prev=temp;
     temp=p;


    }
    node=prev;
}
int main(){
Node* node=new Node(9);
Node* node2=new Node(18);
node->next=node2;
Node* node3=new Node(48);
node2->next=node3;
Node* node4=new Node(10);
node3->next=node4;
reverseLL(node);
// cout<<node->data<<endl;
// cout<<node2->data<<endl;
// cout<<node3->data<<endl;
// cout<<node4->data<<endl;

}