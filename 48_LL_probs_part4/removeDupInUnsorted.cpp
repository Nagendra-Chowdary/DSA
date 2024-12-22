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
void insertAtTail(linkedList *&head, int data)
{
    linkedList *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    linkedList *tail = new linkedList(data);
    tail->next = NULL;
    temp->next = tail;
    /* or you can just pass the tail as argument instead of head to make it easier*/
}


//we can use visited map . It's better.
void removeDuplicates(linkedList *&head)
{
    if (head == NULL)
    {
        return;
    }
    linkedList *node1 = head;
    while (node1 != NULL)
    {
        linkedList *curr = node1->next;
        linkedList *node = node1;
        int d = node->data;

        while (curr != NULL)
        {

            if (d == curr->data)
            {
                node->next = curr->next;
                curr->next = NULL;
                curr->data = 0;
                delete curr;
                curr = node->next;
            }
            else
            {
                node = curr;
                curr = curr->next;
            }
        }
        node1 = node1->next;
    }
}

int main()
{
    linkedList *node = new linkedList(1 /*arguments here if you want to use a constructor*/);

    // To insert a new node at head

    insertAtTail(node, 1);
    insertAtTail(node, 3);
    insertAtTail(node, 2);
    insertAtTail(node, 3);
    insertAtTail(node, 2);
    insertAtTail(node, 4);
    insertAtTail(node, 4);
    showList(node);
    removeDuplicates(node);
    showList(node);
}