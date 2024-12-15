#include<iostream>
using namespace std;
// linked list --A linear datastructure and a collection of nodes
//why -- 
//you can't change the size of an array in runtime
//even if u use vector , everytime it has to increase its size, 
//it creates a new vector of double size and copies the value of old vector
// it is not optimal -- storage is wasted
//linked list is better option -- grows according to requirement
//deletion and insertion is easy .
//A node has data and address of the next node.
//Types --
//singly LL 
/*


*/
class linkedList{
public:
int data;
linkedList* next;

};
void insertAtHead(linkedList* &head,int data){
    linkedList* temp=new linkedList();
    temp->data=data;
    temp->next=head;
    head=temp;

}
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
    linkedList* tail=new linkedList();
   tail->next=NULL;
   tail->data=data;
   temp->next=tail;
   /* or you can just pass the tail as argument instead of head to make it easier*/
}
void insertAtIndex(linkedList* &head,int index,int data){
    if(index==0){
        insertAtHead(head,data);
        return;
    }

    linkedList* temp=head;
    int i=0;
    while(i<index-1){
     temp=temp->next;
    i++;
    }
    linkedList* node=new linkedList();
    node->data=data;
    node->next=temp->next;
    temp->next=node;
}
void deleteAtIndex(linkedList* &head,int index){
    linkedList* temp=head;
    int i=0;
    if(index==0){
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    while(i<index-1){
        temp=temp->next;
        i++;
    }
    linkedList* tem=temp->next;
   temp->next=tem->next;
   tem->next=NULL;
   delete tem;

}
int main(){
 linkedList* node=new linkedList(/*arguments here if you want to use a constructor*/);
node->data=90;
linkedList* node2=new linkedList();
node->next=node2;
node2->data=45;
linkedList* node3=new linkedList();
node3->data=78;
node2->next=node3;
node3->next=NULL;
//To insert a new node at head
linkedList* head=node;
insertAtHead(head,455);
cout<<head->data<<endl;
cout<<head->next<<endl;
cout<<(head->next)->data<<endl;
showList(head);
insertAtTail(head,67);
showList(head);
insertAtIndex(head,2,44);
showList(head);
deleteAtIndex(head,5);
showList(head);

}