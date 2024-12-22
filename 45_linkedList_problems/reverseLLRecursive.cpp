#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// To reverse a linked list using recursion

Node* reverseLL(Node* head){
if(head==NULL || head->next==NULL){
    return head;
}
Node* rem=reverseLL(head->next);
(head->next)->next=head;
head->next=NULL;
return rem;
}


// void reverse(Node *&head, Node *curr, Node *prev = NULL)
// {

//     if (curr == NULL)
//     {
//         head = prev;
//         return;
//     }

//     reverse(head, curr->next, curr);
//     curr->next = prev;
// }
// void reverseLL(Node *&head)
// {
//     Node *curr = head;
//     Node *forward = head->next;
//     reverse(head, curr);
// }
void print(Node *&head)
{
    Node *node = head;
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}
int main()
{
    Node *head = new Node(2);
    Node *node2 = new Node(3);
    head->next = node2;
    Node *node3 = new Node(4);
    node2->next = node3;
    Node *node4 = new Node(5);
    node3->next = node4;
    print(head);
    Node* rem=reverseLL(head);
    print(rem);
}