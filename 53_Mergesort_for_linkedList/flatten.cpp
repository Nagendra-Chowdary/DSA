// remove duplicated from a sorted LL
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class linkedList
{
public:
    int data;
    linkedList *next=NULL;
    linkedList *child=NULL;
    linkedList(int d)
    {
        this->data = d;
        this->next = NULL;
        this->child = NULL;
    }
};

void showList(linkedList *&head)
{
    cout << "List " << endl;
    linkedList *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        if (temp->child)
        {
            cout << temp->child->data;
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
    linkedList *down=left;
    linkedList *n = new linkedList(-1);
    linkedList *ans = n;
    while (down != NULL && right != NULL)
    {
        if (down->data <= right->data)
        {
            ans->next = down;
            ans = ans->next;
            down = down->child;
        }
        else
        {
            ans->next = right;
            ans = ans->next;
            right = right->next;
        }
    }
    while (down != NULL)
    {
        ans->next = down;
        down = down->child;
        ans = ans->next;
    }
    while (right != NULL)
    {
        ans->next = right;
        ans = ans->next;
        right = right->next;
    }
   left->child=NULL;
    return n->next;
}

linkedList *mergeSort(linkedList *&node)
{
    if (node == NULL || node->next == NULL)
    {

        return node;
    }

    linkedList *mid = findMid(node);

    linkedList *left = node;

    linkedList *right = mid->next;
    mid->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    linkedList *result = merge(left, right);
    return result;
}

linkedList* flatten(linkedList* &head){

    // a node has new attribute child. we have to flatten the list and in sorted order.
    if(head==NULL){
    return head;
    }
    linkedList* down=head;
    linkedList* right=flatten(down->next);
    linkedList* ans=merge(down,right);
    return ans;

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
    node->child = nodee;
    nodee->next = NULL;
    insertAtTail(node, tail, 5);
    insertAtTail(node, tail, 6);
    insertAtTail(node, tail, 7);
    linkedList* ans=flatten(node);
    showList(ans);

}