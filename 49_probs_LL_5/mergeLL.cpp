// remove duplicated from a sorted LL
#include <iostream>
using namespace std;

class linkedList
{
public:
    int data;
    linkedList *next;
    linkedList(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void showList(linkedList *&head)
{
    cout << "List " << endl;
    linkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void insertAtTail(linkedList *&tail, int data)
{
    linkedList *temp = new linkedList(data);

    tail->next = temp;
    temp->next = NULL;
    tail = temp;
    /* or you can just pass the tail as argument instead of head to make it easier*/
}

linkedList *mergedList(linkedList *head1, linkedList *head2)
{
    // merging two sorted lists
    // Approach-2
    if(head1==NULL){
        return head2;
       }
       if(head2==NULL){
        return head1;
       }

       if(head1->next==NULL){
        head1->next=head2;
       }
    linkedList *curr1 = head1;
    linkedList *next1 = head1->next;
    linkedList *curr2 = head2;
    linkedList *next2 = head2->next;
    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data <= next1->data && curr2->data >= curr1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;
        }
        if (next1 == NULL)
        {
            curr1->next = curr2;
            return head1;
        }
    }
    return head1;
    // Approach -1
    // if one of them is empty
    //    if(head1==NULL){
    //     return head2;
    //    }
    //    if(head2==NULL){
    //     return head1;
    //    }
    //    linkedList* final=new linkedList(-1);
    //    linkedList* finalr=final;
    //    while(head1!=NULL && head2!=NULL){
    //     if(head1->data>head2->data){
    //         finalr->next=head2;
    //         head2=head2->next;
    //         cout<<"INside"<<endl;
    //     }
    //     else{
    //         finalr->next=head1;
    //         head1=head1->next;
    //     }
    //    finalr=finalr->next;
    //    }
    //    while(head1!=NULL){
    //     finalr->next=head1;
    //     head1=head1->next;
    //    finalr=finalr->next;
    //    }
    //    while(head2!=NULL){
    //     finalr->next=head2;
    //     head2=head2->next;
    //    finalr=finalr->next;
    //    }
    //    finalr->next=NULL;
    // return final->next;
}

int main()
{
    linkedList *node = new linkedList(0 /*arguments here if you want to use a constructor*/);

    linkedList *tail = node;
    // To insert a new node at head

    insertAtTail(tail, 0);
    insertAtTail(tail, 1);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 21);
    insertAtTail(tail, 38);
    linkedList *node2 = new linkedList(1 /*arguments here if you want to use a constructor*/);

    linkedList *tail2 = node2;
    // To insert a new node at head

    insertAtTail(tail2, 1);
    insertAtTail(tail2, 21);
    insertAtTail(tail2, 21);
    insertAtTail(tail2, 31);
    insertAtTail(tail2, 41);
    insertAtTail(tail2, 41);
    showList(node);
    showList(node2);
    // linkedList* list=mergedList(node,node2);
    // For approach 2 you have to send list with smaller first element.
    linkedList *list;
    if (node->data < node2->data)
    {
        list = mergedList(node, node2);
    }
    else
    {
        list = mergedList(node2, node);
    }
    showList(list);
}