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
void insertAtTail(linkedList* &tail,int data){
    linkedList* temp=new linkedList(data);
    
   tail->next=temp;
   temp->next=NULL;
   tail=temp;
   /* or you can just pass the tail as argument instead of head to make it easier*/
}
  
linkedList* sortLL(linkedList* &head){
    //sort zeros ones and twos
    //you can just count the no. of ones zeros and twos in one loop and insert them in order by just 
    //changing the data in the nodes in another loop.

    //second approach
    //create three seperate linked lists for ones zeros and twos respectively and join them.
    //to join them easily , we take a dummy node in all three LLs
    linkedList* zeroHead=new linkedList(-1);
    linkedList* twoHead=new linkedList(-1);
    linkedList* oneHead=new linkedList(-1);
   linkedList* zerotail=zeroHead;
   linkedList* onetail=oneHead;
   linkedList* twotail=twoHead;
    
    linkedList* node=head;
    while(node!=NULL){
        if(node->data==0){
        insertAtTail(zerotail,0);
        }
        if(node->data==1){
        insertAtTail(onetail,1);
        }
        if(node->data==2){
        insertAtTail(twotail,2);
        }
        node=node->next;
    }
    if(oneHead->next!=NULL){
  zerotail->next=oneHead->next;
    }
    else{

  zerotail->next=twoHead->next;
    }
    onetail->next=twoHead->next;
    twotail->next=NULL;
head=zeroHead->next;

 return head;
}
   

int main(){
 linkedList* node=new linkedList(1/*arguments here if you want to use a constructor*/);

 linkedList* tail=node;
//To insert a new node at head

insertAtTail(tail,1);
insertAtTail(tail,2);
insertAtTail(tail,2);
insertAtTail(tail,3);
insertAtTail(tail,0);
insertAtTail(tail,0);
showList(node);
sortLL(node);
showList(node);


}