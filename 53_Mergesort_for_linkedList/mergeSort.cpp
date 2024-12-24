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
void insertAtNode(linkedList *&head, linkedList *node)
{
    node->next = head->next;
    head->next = node;
}

linkedList *findMid(linkedList *node)
{

        cout<<"fourth"<<endl;

    if (node == NULL || node->next == NULL)
    {
        return node;
    }
    linkedList *slow = node;
    linkedList *fast = node->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

linkedList *merge(linkedList *&left, linkedList *&right)
{
    linkedList *n = new linkedList(-1);
    linkedList *ans = n;
    while (left != NULL && right != NULL)
    {
        if(left->data>right->data){
            ans->next=left;
            ans=ans->next;
            left=left->next;
        }else{
            ans->next=right;
            ans=ans->next;
            right=right->next;
        }
    }
    while (left!=NULL)
    {
         ans->next=left;
         left=left->next;
         ans=ans->next;
    }
    while(right!=NULL){
            ans->next=right;
            ans=ans->next;
            right=right->next;
        }
    return n->next;
}

linkedList* mergeSort(linkedList* &node)
{
    cout<<"first"<<node->data<<endl;
    if (node == NULL || node->next == NULL)
    {
            cout<<"sec"<<endl;

        return node;
    }
        cout<<"third"<<endl;

    linkedList *mid = findMid(node);
        cout<<"five"<<endl;

    linkedList *left = node;

    linkedList *right = mid->next;
    mid->next=NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    linkedList *result = merge(left, right);
    return result;
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
  linkedList* res=mergeSort(node);
  showList(res);
}