// remove duplicated from a sorted LL
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class linkedList
{
public:
    int data;
    linkedList *next;
    linkedList *random;
    linkedList(int d)
    {
        this->data = d;
        this->next = NULL;
        this->random = NULL;
    }
};

void showList(linkedList *&head)
{
    cout << "List " << endl;
    linkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        if (temp->random)
        {
            cout << temp->random->data;
        }
        cout << endl;
        temp = temp->next;
    }
}
void insertAtTail(linkedList *&head, linkedList *&tail, int data)
{
    linkedList *temp = new linkedList(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }

    tail->next = temp;
    temp->next = NULL;
    tail = temp;
    /* or you can just pass the tail as argument instead of head to make it easier*/
}
void insertAtNode(linkedList *&head, linkedList *tail)
{
    tail->next = head->next;
    head->next = tail;
}
linkedList *clone(linkedList *&head)
{

    //     //clone a linked list having a random pointer .

    // Approach-2
    // we are not using space for mapping,we'll have constant space complexity.
    linkedList *llis = head;
    linkedList *lis = head;
    linkedList *cllis = NULL;
    linkedList *tail = NULL;
    while (lis != NULL)
    {

        insertAtTail(cllis, tail, lis->data);
        lis = lis->next;
    }
    linkedList* originalNode=head;
    linkedList* cloneNode=cllis;
    while(originalNode!=NULL && cloneNode!=NULL){
        linkedList* next=cloneNode->next;
        cloneNode->next=originalNode->next;
        originalNode->next=cloneNode;
        originalNode=cloneNode->next;
        cloneNode=next;
        


    }
    //we are copying random pointers for the middle nodes that are inserted above.
    linkedList* temp=head;
    while(temp!=NULL){
      if(temp->next!=NULL){
        temp->next->random=temp->random?temp->random->next:NULL;
         
      }
      temp=temp->next;
      if(temp!=NULL){
        temp=temp->next;
      }
    }
    originalNode=head;
    cloneNode=cllis;
    while(originalNode!=NULL && cloneNode!=NULL){
          originalNode->next=cloneNode->next;
          originalNode=originalNode->next;
          if(originalNode!=NULL){
          cloneNode->next=originalNode->next;

          }
          cloneNode=cloneNode->next;
    }
    showList(head);
    showList(cllis);

return cllis;

    // Approach -1
    // we ara using space for mapping so space complexity is n;

    //  linkedList* lis=head;
    //  linkedList* cllis=cl;
    //  linkedList* tail=cl;
    // map<linkedList*,linkedList*>oldToNew;
    //  while(lis!=NULL){
    //     insertAtTail(cllis,tail,lis->data);
    //    oldToNew[lis]=tail;
    //     lis=lis->next;
    //  }
    //  linkedList* old=head;
    //  linkedList* neww=cllis;
    // while(old!=NULL){
    //     neww->random=oldToNew[old->random];
    //     neww=neww->next;
    //     old=old->next;
    // }
    // cl=cllis;
}

int main()
{
    linkedList *node = new linkedList(1); /*arguments here if you want to use a constructor*/
    linkedList *tail = node;
    insertAtTail(node, tail, 1);
    insertAtTail(node, tail, 2);
    insertAtTail(node, tail, 3);
    insertAtTail(node, tail, 4);
    linkedList *nodee = new linkedList(2);
    node->random = nodee;
    tail->next = nodee;
    tail = nodee;
    insertAtTail(node, tail, 5);
    insertAtTail(node, tail, 6);
    insertAtTail(node, tail, 7);
    // linkedList *cl = NULL;
    linkedList *cl = clone(node);
    // cout<<node->random->data<<endl;
    //     showList(cl);
    // showList(node);
}