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
//print --same as single linked list
void print(Node* &head){
    Node* temp=head;
    cout<<"List"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void getLength(Node* &head){
    Node* temp=head;
    int length=0;
     while(temp!=NULL){
        // cout<<temp->data;
        temp=temp->next;
        length++;
    }
    cout<<length<<endl;
}

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtIndex(Node* &head,int index,int d){
    if(index==0){
        insertAtHead(head,d);
        return;
    }
    Node* temp=new Node(d);
    Node* first=head;
    int i=0;
    while(i<index-1){
      first=first->next;
      i++;
      
    }
    temp->next=first->next;
    temp->prev=first;
    first->next=temp;
 
}
void deleteAtIndex(Node* &head,int index){
    Node* first=head;
     if(index==0){
        head=first->next;
      first->next->prev=NULL;
      first->next=NULL;
      
      delete first;
      return;
     }
    int i=0;
    while(i<index-1){
      first=first->next;
      i++;
      
    }
    Node* sec=first->next;
    first->next=sec->next;
    if(sec->next!=NULL){   
         sec->next->prev=first;
}
    sec->next=NULL;
    sec->prev=NULL;
    delete sec;
}

int main(){
    Node* head=new Node(10);
    print(head);
    getLength(head);
    insertAtHead(head,23);
    insertAtIndex(head,1,44);
    insertAtIndex(head,0,44);
    insertAtIndex(head,4,44);
        
    
    print(head);
    getLength(head);
    deleteAtIndex(head,4);
    print(head);
    getLength(head);
    // print(head);
    // getLength(head);
}