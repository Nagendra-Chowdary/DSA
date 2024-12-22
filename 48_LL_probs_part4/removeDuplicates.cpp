//remove duplicated from a sorted LL
#include<iostream>
using namespace std;




class linkedList{
public:
int data;
linkedList* next;
linkedList(int d){
    this->data=d;
    this->next=NULL;
}

};

void showList(linkedList* &head){
    cout<<"List "<<endl;
    linkedList* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
void insertAtTail(linkedList* &head,int data){
    linkedList* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    linkedList* tail=new linkedList(data);
   tail->next=NULL;
   temp->next=tail;
   /* or you can just pass the tail as argument instead of head to make it easier*/
}
  
void removeDuplicates(linkedList* &head){
    if(head==NULL){
        return;
    }
    linkedList* node=head;
    linkedList* curr=node->next;
    int d=head->data;
    while(curr!=NULL){
        if(d==curr->data){
        node->next=curr->next;
        // curr=curr->next;
        curr->next=NULL;
        curr->data=0;
        delete curr;
        curr=node->next;
      
        }
        else{
            d=curr->data;
        node=curr;
        curr=curr->next;
        }

    }
}
   

int main(){
 linkedList* node=new linkedList(1/*arguments here if you want to use a constructor*/);


//To insert a new node at head

insertAtTail(node,1);
insertAtTail(node,2);
insertAtTail(node,2);
insertAtTail(node,3);
insertAtTail(node,4);
insertAtTail(node,4);
showList(node);
removeDuplicates(node);
showList(node);


}