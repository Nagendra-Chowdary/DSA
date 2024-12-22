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
    if(tail==NULL){
        tail=temp;
        tail->next=NULL;
        return;
    }
   tail->next=temp;
   temp->next=NULL;
   tail=temp;
    /* or you can just pass the tail as argument instead of head to make it easier*/
}
linkedList *reverse(linkedList *&head)
{
    if (head->next == NULL)
    {
        return head;
    }
    linkedList *lis = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return lis;
}
void app(linkedList* &an,linkedList* n){
    if(an==NULL){
        an=n;
        return;
    }
    linkedList* temp=an;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}
int add(linkedList *&head1, linkedList *head2)
{
    // To add two linked lists

    // Approach-2

    linkedList *a = reverse(head1);
    linkedList *b = reverse(head2);
  
    int carry = 0, sum = 0;
    linkedList *ans=NULL;
    linkedList *tail=ans;

   while(a!=NULL && b!=NULL){
     sum=carry+a->data+b->data;
     int digit=sum%10;
     linkedList* n=new linkedList(digit);
     app(ans,n);
     carry=sum/10;
     sum=0;
   a=a->next;
   b=b->next;
   }
   while(a!=NULL){
    sum=carry+a->data;
     int digit=sum%10;
     linkedList* n=new linkedList(digit);
    app(ans,a);
    a=a->next;
    carry=sum/10;
   }
   while(b!=NULL){
    sum=carry+b->data;
     int digit=sum%10;
     linkedList* n=new linkedList(digit);
    app(ans,b);
    carry=sum/10;
    b=b->next;
   }
   
   ans=reverse(ans);
   showList(ans);
   int final=0;
   while(ans!=NULL){
    final=final*10+ans->data;
    ans=ans->next;
   }

    
return final;
    // Approach -1
    //     linkedList* one=head1;
    //     linkedList* two=head2;
    //     int a=0;
    //     int b=0;
    //     while(one!=NULL || two!=NULL){
    //         if(one!=NULL){
    //             a=a*10+one->data;
    //             one=one->next;
    //         }
    //         if(two!=NULL){
    //             b=b*10+two->data;
    //             two=two->next;
    //         }
    //     }
    // return a+b;
}

int main()
{
    linkedList *node = new linkedList(1 /*arguments here if you want to use a constructor*/);

    linkedList *tail = node;
    // To insert a new node at head

    insertAtTail(tail, 1);
    insertAtTail(tail, 1);
    insertAtTail(tail, 1);

    linkedList *node2 = new linkedList(1 /*arguments here if you want to use a constructor*/);

    linkedList *tail2 = node2;
    // To insert a new node at head

    insertAtTail(tail2, 1);
    insertAtTail(tail2, 1);

    showList(node2);
    showList(node);

    int ans = add(node, node2);

    cout << ans << endl;
}