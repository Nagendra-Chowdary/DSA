// remove duplicated from a sorted LL
#include <iostream>
#include <vector>
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
linkedList *reverse(linkedList *&t)
{
    if (t->next == NULL)
    {
        return t;
    }
    linkedList *lis = reverse(t->next);
    (t->next)->next = t;
    t->next = NULL;
    return lis;
}
bool palin(linkedList *&head)
{

    // Approach -2 for constant space complexity
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // Find the middle node
    linkedList *temp = head;
    linkedList *slow = head;
    linkedList *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // slow is the middle elemnt;
    // Reverse the second half of the linked list.
    linkedList *t = slow->next;
    slow->next = reverse(t);

    linkedList *h1 = slow->next;
    linkedList *h2 = head;
    while (h1 != NULL)
    {
        if (h1->data == h2->data)
        {
            h1 = h1->next;
            h2 = h2->next;
        }
        else
        {
            t = slow->next;
            slow->next = reverse(t);
            return false;
        }
    }
    // make the list normal by reversing the second half again

    t = slow->next;
    slow->next = reverse(t);
    return true;
    // To check whether a linked list is a palindrome or not.
    // Approach-1

    //   vector<int> a;
    //   linkedList* node=head;
    //   while(node!=NULL){
    //     a.push_back(node->data);
    //     node=node->next;
    //   }
    //   int size=a.size();
    //   int s=0,e=size-1;
    //   while(s<=e){
    //     if(a[s]==a[e]){
    //         s++;
    //         e--;
    //     }
    //     else{return 0;}
    //   }
    //   return 1;
}

int main()
{
    linkedList *node = new linkedList(1); /*arguments here if you want to use a constructor*/
    linkedList *tail = node;
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 4);
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    insertAtTail(tail, 1);
    cout << palin(node) << endl;
    showList(node);
}